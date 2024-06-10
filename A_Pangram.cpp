#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, count=0,flag=0; cin>>n;
    string s; cin>>s;
    for(int i =0;i<s.length();i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
    }
        
    int cnt[26]={0};
    for(int i =0;i<s.length();i++)
    {
        int val=int(s[i])-'a';
        cnt[val]++;
    }
    for(int i =0;i<s.length();i++)
    {
        int val1=int(s[i]-'a');
        if(cnt[val1]!=0)
        {
            if(cnt[val1]>0) count++;
        }
        cnt[val1]=0;
    }
    if(count==26) cout<<"YES";
    else cout<<"NO";

    
    return 0;
}