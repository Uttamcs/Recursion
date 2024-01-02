// Subset Sums II

// https://leetcode.com/problems/subsets-ii/description/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void findSubsets(int ind, vector<int> &nums, vector<int> &ds, vector<vector<int>> &ans)
{
    ans.push_back(ds);
    if(ds.size() == 0)
    {
        cout<<"{}";
    }
    for (int i = ind; i < nums.size(); i++)
    {
        if (i != ind && nums[i] == nums[i - 1])
            continue;
        ds.push_back(nums[i]);
        findSubsets(i + 1, nums, ds, ans);
        ds.pop_back();
    }
}

vector<vector<int>> subsetsWithDup(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> ds;
    sort(nums.begin(), nums.end());
    findSubsets(0, nums, ds, ans);
    return ans;
}
int main()
{
    vector<int>vc = {1,2,2};
    for(auto it:subsetsWithDup(vc))
    {
        for(auto element : it)
        {
            cout<<element<<" ";
        }
        cout<<endl;
    }
    return 0;
}