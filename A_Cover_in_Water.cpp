#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    int n,cons=0,ans=0; cin>>n;
    string s; cin>>s;
    for(int i =0;i<s.length();i++)
    {
        if(s[i]=='#') continue;

        cons++;
        if(s[i]==s.length()-1 || s[i+1]!=s[i])
        {
            if(cons>2)
            {
                ans=2;
                break;
            }
            else
            {
                ans=ans+cons;
            }
            cons=0;
        }
    }
    cout<<ans<<endl;
    }
    return 0;
}