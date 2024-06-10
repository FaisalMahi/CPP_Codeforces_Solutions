// https://codeforces.com/contest/1703/problem/B

#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int test; cin>>test;
    while(test--)
    {
    int n,count=0; cin>>n;
    string s; cin>>s;
    int cnt[26]={0};
    for(int i =0;i<s.length();i++)
    {
        int val = int(s[i])-'A';
        cnt[val]++;
    }
    for(int i =0;i<s.length();i++)
    {
        int val = int(s[i])-'A';
        if(cnt[val]!=0)
        {
            count=count+cnt[val];
            count = count+1;
        }
        cnt[val]=0;                
    }    
    cout<<count<<endl;
    }
    return 0;
}