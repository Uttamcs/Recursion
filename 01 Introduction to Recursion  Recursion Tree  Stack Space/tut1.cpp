// #include<bits/stdc++.h>
// using namespace std;

// void print()
// {
//     cout<<1<<endl;
//     print();
// }
// int main()
// {
//     print();
//     return 0;
// }

// // It will run infinite time . So we can call it is the case of Stack Overflow







#include<bits/stdc++.h>
using namespace std;


int counter = 0;
void print()
{
    // Base condition
    if(counter == 5)
    {
        return ;
    }
    counter++;
    cout<<counter<<endl;
    print();
}
int main()
{
    print();
    return 0;
}


// It will run till counter becomes equal to 5