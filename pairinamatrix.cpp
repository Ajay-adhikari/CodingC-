#include<bits/stdc++.h>
using namespace std;
void f(int i , string &s ,int n ,  string &ans)
{
    if(i>n)
    {
        return ;
    }
    if(i==n)
    {
        for(auto i : ans)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    ans.push_back(s[i]);
    f(i+1, s, n, ans);
    ans.pop_back();
    f(i+1,s, n,ans);
}
int main()
{
    string s;
    cin>>s;
    vector<char>v;
    string ans="";
    f(0 , s ,s.size(),ans);
    return 0;
}