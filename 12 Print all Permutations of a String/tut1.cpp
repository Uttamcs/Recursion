// Permutations

//  https://leetcode.com/problems/permutations/


// Approach - 1


#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(vector<int> &nums, vector<vector<int>> &ans, vector<int> &ds, int arr[])
{
    // base case
    if (ds.size() == nums.size())
    {
        ans.push_back(ds);
        return;
    }
    // pick up the element
    for (int i = 0; i < nums.size(); i++)
    {
        if (!arr[i])
        {
            ds.push_back(nums[i]);
            arr[i] = 1;
            solve(nums, ans, ds, arr);
            arr[i] = 0;
            ds.pop_back();
        }
    }
}
vector<vector<int>> permute(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> ds;
    int *arr = new int[nums.size()];
    for (int i = 0; i < nums.size(); i++)
    {
        arr[i] = 0;
    }
    solve(nums, ans, ds, arr);
    delete[] arr;
    return ans;
}

int main()
{
    vector<int>vc = {1,2,3};
    for(auto it:permute(vc))
    {
        for(auto element:it)
        {
            cout<<element<<" ";
        }
        cout<<endl;
    }
    return 0;
}