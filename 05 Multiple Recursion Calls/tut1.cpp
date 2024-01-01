

// Fibonacci Series
#include<iostream>
using namespace std;
int f(int n)
{
    // base case
    if(n <=  1)
    {
        return n;
    }
    int last = f(n-1);
    int slast = f(n-2);
    return last + slast;
}
int main()
{
    int n;
    cout<<"Enter the index number for which u want to find value:"<<endl;
    cin>>n;

    cout<<f(n)<<endl;
    return 0;
}

