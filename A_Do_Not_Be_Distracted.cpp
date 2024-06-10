#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
            int n,flag=0; cin>>n;
    string s; cin>>s;
    for(int i=0;i<s.length();i++)
    {
        for(int j=i+1;j<s.length();j++)
        {
            if(s[i]==s[j])
            {
                if(s[j]!=s[j-1])
                {
                    flag=1;
                    break;
                }
            }
        }
    }
    if(flag==1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    }
    return 0;
}