#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    int n,first=0,last=0; cin>>n;
    string s; cin>>s;
    int i =0;
    for(int i =0;i<s.length();i++)
    {
        if(s[i]=='B')   last = i;
    }
    for(int i =n-1;i>=0;i--)
    {
        if(s[i]=='B') first=i;
    }
    int ans = (last-first)+1;
    cout<<ans<<endl;
    }
    return 0;
}