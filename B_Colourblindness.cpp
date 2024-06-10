#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    int n,flag=0; cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    for(int i =0;i<s1.length();i++)
    {
        if(s1[i]=='R'&&s2[i]!='R'||s2[i]=='R'&&s1[i]!='R')
        {
            flag=1;
            break;
        }
    }
        if(flag==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;   
    
    }
    return 0;
}