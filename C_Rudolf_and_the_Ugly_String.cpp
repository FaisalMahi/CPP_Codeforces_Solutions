#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
    int n,count=0,count1=0,ans=0; cin>>n;
    string s; cin>>s;
    if(s.length()<3) ans=0;
    else
    {
    for(int i = 0; i < s.length() - 2; i++)
    {
        if(s[i]=='m'&&s[i+1]=='a'&&s[i+2]=='p') count++;
        else if(s[i]=='p'&&s[i+1]=='i'&&s[i+2]=='e') count++;
    }
    if(s.length()>=5)
    {
    for(int i = 0; i < s.length() - 4; i++)
    {
        if(s[i]=='m'&&s[i+1]=='a'&&s[i+2]=='p'&&s[i+3]=='i'&&s[i+4]=='e') count1++;
    }
    }
    ans=count-count1;
    }
   
    cout<<ans<<endl;
    }
    return 0;
}