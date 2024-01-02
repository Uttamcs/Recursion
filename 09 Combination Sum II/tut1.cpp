// Combinational sum II

https://leetcode.com/problems/combination-sum-ii/description/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void findCombination(int ind, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds)
{
    // base case
    if (target == 0)
    {
        ans.push_back(ds);
        return;
    }
    // check it is repeating or not
    for (int i = ind; i < arr.size(); i++)
    {
        if (i > ind && arr[i] == arr[i - 1])
        {
            continue;
        }
        if (arr[i] > target)
        {
            break;
        }
        ds.push_back(arr[i]);
        findCombination(i + 1, target - arr[i], arr, ans, ds);
        ds.pop_back();
    }
}

vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
{
    sort(candidates.begin(), candidates.end());
    vector<vector<int>> ans;
    vector<int> ds;
    findCombination(0, target, candidates, ans, ds);
    return ans;
}

int main()
{
    vector<int> arr = {10, 1, 2, 7, 6, 1, 5};
    int target = 8;
    for (auto i : combinationSum2(arr, target))
    {
        for (auto ele : i)
        {
            cout << ele << " ";
        }
        cout << endl;
    }
    return 0;
}