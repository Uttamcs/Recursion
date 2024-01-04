#include<bits/stdc++.h>
using namespace std;
#define ll long long
    bool isPallindrome(string s, int start, int end)
    {
        while(start <= end)
        {
            if(s[start++] != s[end--])
            {
                return false;
            }
        }
        return true;
    }
    void solve(int ind , vector<vector<string>>&res, vector<string>&path, string s)
    {
        // base case 
        if(ind == s.length())
        {
            res.push_back(path);
            return;
        }
        for(int i=ind; i<s.size(); i++)
        {
            if(isPallindrome(s, ind, i))
            {
                path.push_back(s.substr(ind, i-ind+1));
                solve(i+1, res, path, s);
                path.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>res;
        vector<string>path;
        solve(0, res, path, s);
        return res;
    }

int main()
{
    string s = "aabb";
    for(auto it:partition(s))
    {
        for(auto str:it)
        {
            cout<<str<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}