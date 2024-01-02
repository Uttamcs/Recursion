// Subset Sums

// https://www.geeksforgeeks.org/problems/subset-sums2234/1


#include<bits/stdc++.h>
using namespace std;
#define ll long long
void func(int ind, int sum , vector<int>arr, int n , vector<int>&ans)
{
    // base case
    if(ind == n)
    {
        ans.push_back(sum);
        return ;
    }
    // pick up the element
    func(ind+1, sum + arr[ind] , arr, n, ans);

    // not pick up the elements
    func(ind+1, sum , arr, n , ans);
}
vector<int> findSubset(vector<int>vc, int n)
{
    vector<int>ans;
    func(0,0,vc, n, ans);
    return ans;
}
int main()
{
    vector<int> vc = {2, 3};
    int n = vc.size();
    for(auto it: findSubset(vc, n))
    {
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}