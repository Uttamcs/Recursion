// // Print name n times using recursion

// #include<iostream>
// using namespace std;


// void printName(int i, int n)
// {
//     // base case
//     if(i>n)
//     {
//         return ;
//     }
//     cout<<"Uttam"<<endl;
//     i++;
//     printName(i, n);
// }
// int main()
// {
//     int n;
//     cout<<"Enter the value of n:- "<<endl;
//     cin>>n;
//     printName(1,n);
//     return 0;
// }




// // Print linearly from 1 to n

// #include<bits/stdc++.h>
// using namespace std;
// void print(int i, int n)
// {
//     if(i >n)
//     {
//         return ;
//     }
//     cout<<i<<endl;
//     print(++i, n);
// }
// int main()
// {
//     int n = 10;
//     print(1, n);
//     return 0;
// }










// // Print linearly from n to 1

// #include<bits/stdc++.h>
// using namespace std;
// void print(int i, int n)
// {
//     if(i < 1)
//     {
//         return ;
//     }
//     cout<<i<<endl;
//     print(--i, n);
// }
// int main()
// {
//     int n = 10;
//     print(n, n);
//     return 0;
// }







// // Print linearly from 1 to n (but by backTracking)


// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// void print(int i, int n)
// {
//     // base case
//     if(i < 1)
//     {
//         return ;
//     }
//     print(i-1, n);
//     cout<<i<<endl;
// }
// int main()
// {
//     int n = 5 ;
//     print(n, n);
//     return 0;
// }













// Print linearly from n to 1 (but by backTracking)

#include<bits/stdc++.h>
using namespace std;
#define ll long long
void print(int i, int n)
{
    // base case
    if(i > n)
    {
        return ;
    }
    print(i+1, n);
    cout<<i<<endl;
}
int main()
{
    int n = 5 ;
    print(1, n);
    return 0;
}