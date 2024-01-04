// Rat in a maze problem

//https://www.geeksforgeeks.org/problems/rat-in-a-maze-problem/1



#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool isSafe(int x, int y, vector<vector<bool>> &v, vector<vector<int>> &arr, int n)
{
    if ((x >= 0 && x < n) && (y >= 0 && y < n) && v[x][y] != 1 && arr[x][y] == 1)
    {
        return true;
    }
    return false;
}

void solve(int x, int y, string path, vector<vector<bool>> &v, vector<string> &ans, vector<vector<int>> &arr, int n)
{
    if (x == n - 1 && y == n - 1)
    {
        ans.push_back(path);
        return;
    }

    // Down
    if (isSafe(x + 1, y, v, arr, n))
    {
        v[x][y] = 1;
        solve(x + 1, y, path + 'D', v, ans, arr, n);
        v[x][y] = 0;
    }
    // Left
    if (isSafe(x, y - 1, v, arr, n))
    {
        v[x][y] = 1;
        solve(x, y - 1, path + 'L', v, ans, arr, n);
        v[x][y] = 0;
    }
    // Right
    if (isSafe(x, y + 1, v, arr, n))
    {
        v[x][y] = 1;
        solve(x, y + 1, path + 'R', v, ans, arr, n);
        v[x][y] = 0;
    }
    // Up
    if (isSafe(x - 1, y, v, arr, n))
    {
        v[x][y] = 1;
        solve(x - 1, y, path + 'U', v, ans, arr, n);
        v[x][y] = 0;
    }
}

vector<string> findPath(vector<vector<int>> &m, int n)
{
    vector<string> ans;
    vector<vector<bool>> visited(n, vector<bool>(n, 0));
    string path = "";

    if (m[0][0] == 0)
        return ans;

    solve(0, 0, path, visited, ans, m, n);

    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> m(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> m[i][j];
        }
    }
    vector<string> result = findPath(m, n);
    sort(result.begin(), result.end());
    if (result.size() == 0)
        cout << -1;
    else
        for (int i = 0; i < result.size(); i++)
            cout << result[i] << " ";
    cout << endl;

    return 0;
}