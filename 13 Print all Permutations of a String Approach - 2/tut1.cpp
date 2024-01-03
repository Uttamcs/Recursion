// Permutations

//  https://leetcode.com/problems/permutations/


// Approach - 2


#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int index, vector<int> &nums, vector<vector<int>> &ans)
{
    // base case
    if (index == nums.size())
    {
        ans.push_back(nums);
        return;
    }


    for (int i = index; i < nums.size(); i++)
    {
        swap(nums[index], nums[i]);
        solve(i+1, nums, ans);
        swap(nums[index], nums[i]);
    }
}
vector<vector<int>> permute(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> ds;
    int index = 0;
    solve(index, nums, ans);
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