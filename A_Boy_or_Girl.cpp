#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin>>s;
    int cnt[26]={0};
    for(int i =0;i<s.length();i++)
    {
        int val=int(s[i])-'a';
        cnt[val]++;
    }
    int count=0;
    for(int i =0;i<s.length();i++)
    {
        int val1=int(s[i]-'a');
        if(cnt[val1]!=0)
        {
            count++;
        }
        cnt[val1]=0;
    }
    if(count%2==0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
    return 0;
}