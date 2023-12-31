
// // Write a recursive code to reverse an array

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long

// void reverse(int i, int arr[], int n)
// {
//     // base condition
//     if(i >= n/2)
//     {
//         return ;
//     }
//     swap(arr[i], arr[n - i-1]);
//     reverse(i+1, arr, n);
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"Before reversing array"<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl<<"After reversing array"<<endl;
//     reverse(0, arr, n);
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
    
//     return 0;
// }













// Write a recursive code to check given string is pallindrome or not

#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool f(int i, string s)
{
    // base case
    if(i >= s.size() /2 ) return true;

    if(s[i] != s[s.size() - i -1]) return false;

    return f(i+1, s);
}
int main()
{
    string s ="madam";
    cout<<f(0,s)<<endl;
    return 0;
}