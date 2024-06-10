#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
            int n,cnt0=0,cnt1=0,flag=0; cin>>n;
    string s; cin>>s;
    for(int i =0;i<s.length();i++)
    {
        if(s[i]=='0') cnt0++;
        else cnt1++;
    }
    if(n%2!=0&&n==cnt1) flag=1;
    else if(cnt0%2!=0)
    {
        flag=1;
        
    }
    else if(cnt0==2)
    {
            for(int i =0;i<s.length();i++)
            {
                if((s[i]=='1')&&(s[i+1]=='1'))
                {
                    flag=1;
                }
            }
    }
    else if(cnt0%2==0)
    {
        flag=0;
    }
    if(flag==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    return 0;
}