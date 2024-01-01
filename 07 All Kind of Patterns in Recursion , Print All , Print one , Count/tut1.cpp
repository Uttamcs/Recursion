#include<bits/stdc++.h>
using namespace std;
#define ll long long
void printS(int ind, vector<int>&ds, int sum , int target, vector<int> arr, int n )
{
    // base case
    if(ind == n)
    {
        if(sum == target)
        {
            for(auto it: ds)
            {
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return ;
    }

    ds.push_back(arr[ind]);
    sum+= arr[ind];

    printS(ind + 1, ds, sum, target, arr, n);
    sum-= arr[ind];
    ds.pop_back();

    printS(ind+1, ds, sum, target, arr, n);

}
int main()
{
    vector<int> ds;
    vector<int>vc ={1,2,1};
    int n = vc.size();
    int sum = 0;
    int target = 2;
    printS(0, ds, sum, target, vc, n);
    
    return 0;
}