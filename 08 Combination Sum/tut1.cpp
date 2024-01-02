// Combination Sum 

// https://leetcode.com/problems/combination-sum/description/



#include<bits/stdc++.h>
using namespace std;
#define ll long long
void findCombination(int ind, int target,vector<int>&arr, vector<vector<int>>&ans, vector<int>&ds)
{
    // base case
    if(ind == arr.size())
    {
        if(target == 0)
        {
            ans.push_back(ds);
        }
        return ;
    }

    // pick up element 
    if(arr[ind] <= target)
    {
        ds.push_back(arr[ind]);
        findCombination(ind, target- arr[ind], arr, ans , ds);
        ds.pop_back();
    }

    // not pick up the element 
    findCombination(ind +1, target, arr, ans , ds);
}
vector<vector<int>> combinationSum(vector<int>&arr, int target)
{
    vector<vector<int>>ans;
    vector<int>ds;
    findCombination(0,target, arr, ans , ds);
    return ans;
}
int main()
{
    vector<int>arr = {2,3,6,7};
    int target = 7;
    int ind =0 ;
    for(auto it : combinationSum(arr, target))
    {
        for(auto element: it)
        {
            cout<<element<<" ";
        }
        cout<<endl;
    }   
    cout<<endl; 
    return 0;
}