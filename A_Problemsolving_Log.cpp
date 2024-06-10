// https://codeforces.com/contest/1914/problem/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
    int n; cin>>n;
    string s; cin>>s;

    int cnt[26]={0};
    for(int i =0;i<s.length();i++)
    {
        int val = int(s[i])-'A';
        cnt[val]++;
    }

    int count = 0;

    for(int i =0;i<s.length();i++)
    {
        int val = int(s[i])-'A';
        int val1= val+1;
        if(cnt[val]!=0)
        {
            if(cnt[val]>=val1) count++;  
        }
        cnt[val]=0; 
    }
    cout<<count<<endl;
    }
    return 0;
}