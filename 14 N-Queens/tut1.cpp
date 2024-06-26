// N-Queens

// https://leetcode.com/problems/n-queens/description/


#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool isSafe(int row, int col, vector<string> &board, int n)
{
    // check upper diagonal
    int dupCol = col;
    int dupRow = row;

    while (row >= 0 && col >= 0)
    {
        if (board[row][col] == 'Q')
        {
            return false;
        }
        row--;
        col--;
    }

    row = dupRow;
    col = dupCol;
    while (col >= 0)
    {
        if (board[row][col] == 'Q')
            return false;
        col--;
    }

    col = dupCol;
    while (row < n && col >= 0)
    {
        if (board[row][col] == 'Q')
        {
            return false;
        }
        row++;
        col--;
    }
    return true;
}

void solve(int col, vector<string> &board, vector<vector<string>> &ans, int n)
{
    // base case
    if (col == n)
    {
        ans.push_back(board);
        return;
    }
    for (int row = 0; row < n; row++)
    {
        if (isSafe(row, col, board, n))
        {
            board[row][col] = 'Q';
            solve(col + 1, board, ans, n);
            board[row][col] = '.';
        }
    }
}
vector<vector<string>> solveNQueens(int n)
{
    vector<vector<string>> ans;
    vector<string> board(n);
    string s(n, '.');
    for (int i = 0; i < n; i++)
    {
        board[i] = s;
    }
    solve(0, board, ans, n);
    return ans;
}
int main()
{
    int n = 4;
    for(auto it: solveNQueens(n))
    {
        for(string str:it)
        {
            cout<<str<<" ";
        }
        cout<<endl;
    }
}