#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    int n,flag=0; cin>>n;
    string s; cin>>s;
    if(n==1) flag=1;
    else if(n==2)
    {
        if(s[0]=='W'||s[1]=='W') flag=1;
        if(s[0]=='B'||s[1]=='B') flag=1;
        if(s[0]=='R'||s[1]=='R') flag=1;
    }
    else
    {
        for(int i =1;i<s.length()-1;i++)
        {
            if(s[i-1]=='W'&&s[i+1]=='W'&&s[i]!='W')
            {
                flag=1;
                break;
            }
            else if(s[i-1]=='B'&&s[i+1]=='B'&&s[i]=='B')
            {
                flag=1;
                break;
            }
            else if(s[i-1]=='R'&&s[i+1]=='R'&&s[i]=='R')
            {
                flag=1;
                break;
            }
            
        }
    }
    if(flag==1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    }
    return 0;
}