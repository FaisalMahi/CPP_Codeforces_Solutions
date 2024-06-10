#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin>>s;
    int up=0,low=0;
    for(int i =0;i<s.length();i++)
    {
        if(s[i]>='A'&&s[i]<='Z') up++;
        else low++;
    }
    for(int i =0;i<s.length();i++)
    {
        if(low>=up)
        {
            if(s[i]>='A'&&s[i]<='Z') s[i]=s[i]+32;
        }
        else
        {
            if(s[i]>='a'&&s[i]<='z') s[i]=s[i]-32;
        }
    }
    cout<<s;
    return 0;
}