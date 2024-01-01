// // Print all the subsequence of array whose sum is equal to n 

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// void printS(int ind, vector<int>&ds, int sum , int target, vector<int> arr, int n )
// {
//     // base case
//     if(ind == n)
//     {
//         if(sum == target)
//         {
//             for(auto it: ds)
//             {
//                 cout<<it<<" ";
//             }
//             cout<<endl;
//         }
//         return ;
//     }

//     // pick element of array into subsequences
//     ds.push_back(arr[ind]);
//     sum+= arr[ind];

//     printS(ind + 1, ds, sum, target, arr, n);
//     sum-= arr[ind];
//     ds.pop_back();

//     // not pick element of array into subsequences
//     printS(ind+1, ds, sum, target, arr, n);

// }
// int main()
// {
//     vector<int> ds;
//     vector<int>vc ={1,2,1};
//     int n = vc.size();
//     int sum = 0;
//     int target = 2;
//     printS(0, ds, sum, target, vc, n);
//     return 0;
// }














// // Print only one of the subsequence of array whose sum is equal to n 

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// bool printS(int ind, vector<int>&ds, int sum , int target, vector<int> arr, int n )
// {
//     // base case
//     if(ind == n)
//     {
//         // condition satisfied
//         if(sum == target)
//         {
//             for(auto it: ds)
//             {
//                 cout<<it<<" ";
//             }
//             cout<<endl;
//             return true;
//         }

//         // condition not satisfied
//         return false;
//     }

//     // pick element of array into subsequences
//     ds.push_back(arr[ind]);
//     sum+= arr[ind];

//     if(printS(ind + 1, ds, sum, target, arr, n) == true)
//     {
//         return true;
//     }
//     sum-= arr[ind];
//     ds.pop_back();

//     // not pick element of array into subsequences
//     if(printS(ind+1, ds, sum, target, arr, n) == true)
//     {
//         return true;
//     }
//     return false;
// }
// int main()
// {
//     vector<int> ds;
//     vector<int>vc ={1,2,1};
//     int n = vc.size();
//     int sum = 0;
//     int target = 2;
//     printS(0, ds, sum, target, vc, n);
//     return 0;
// }













// Count the number of subsequences of sum equal to n

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int countS(int ind, int sum , int target, vector<int> arr, int n)
{
    // base case
    if(ind == n)
    {
        if(sum == target)
        {
            return 1;
        }
        else 
        {
            return 0;
        }
    }
    sum+=arr[ind];
    int l =countS(ind+1, sum, target, arr, n);

    sum-=arr[ind];
    int r = countS(ind+1, sum, target, arr, n);
    return l+r;
}
int main()
{
    vector<int> ds;
    vector<int>vc ={1,2,1};
    int n = vc.size();
    int sum = 0;
    int target = 2;
    cout<<countS(0, sum, target, vc, n)<<endl;
    return 0;
}
