// //sum of digits till n (Parameterised way) 

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long

// void sumCal(int i, int sum)
// {
//     // base case
//     if(i< 1)
//     {
//         cout<<sum<<endl;
//         return ;
//     }
//     sumCal(i-1, sum+i);
// }
// int main()
// {
//     sumCal(5, 0);
//     return 0;
// }








// //sum of digits till n (Functional way) 
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// int sumCal(int n)
// {
//     if(n == 0)
//     {
//         return 0;
//     }
//     return n + sumCal(n-1);
// }
// int main()
// {
//     cout<<sumCal(5)<<endl;
//     return 0;
// }










// // Find factorial of n (Parameterise Method)
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long

// void fact(int n, int res)
// {
//     // base case
//     if(n == 1)
//     {
//         cout<<res<<endl;
//         return; 
//     }
//     fact(n-1, n*res );
// }

// int main()
// {
//     fact(5, 1);
//     return 0;
// }













// dind factorial of n (Functional method)


#include<bits/stdc++.h>
using namespace std;
#define ll long long
int fact(int n)
{
    // base case
    if(n == 1)
    {
        return 1;
    }
    return n * fact(n-1);
}
int main()
{
    cout<<fact(5)<<endl;
    return 0;
}