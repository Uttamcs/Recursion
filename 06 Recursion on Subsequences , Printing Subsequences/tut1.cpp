
// Write a recursive code for finding all subsequences of an Array

#include <bits/stdc++.h>
using namespace std;
#define ll long long
void f(int i, vector<int> &ds, vector<int> vc, int n)
{
    if (i >= n)
    {
        for (auto itr : ds)
        {
            cout << itr << " ";
        }
        if (ds.size() == 0)
        {
            cout << "{}";
        }
        cout << endl;
        return;
    }

    // not pick or not take condition , the element is not added to your subsequence
    f(i + 1, ds, vc, n);


    // take or pick the element is added into subsequence
    ds.push_back(vc[i]);
    // f(++i, ds, vc, n);
    f(i + 1, ds, vc, n);
    ds.pop_back();
}
int main()
{
    vector<int> vc = {3, 1, 2};
    vector<int> ds;
    int n = vc.size();
    f(0, ds, vc, n);

    return 0;
}