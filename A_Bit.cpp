#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0; cin>>n;
    while(n--)
    {
    string s; cin>>s;
    if(s[0]=='+'||s[1]=='+'||s[2]=='+') sum+=1;
    if(s[0]=='-'||s[1]=='-'||s[2]=='-') sum-=1;
    }
    cout<<sum;
    return 0;
}