// https://codeforces.com/problemset/problem/1754/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    int n; cin>>n;
    string s;
    cin>>s;
    int qus=0,ans=0;
    for(int i =0;i<s.length();i++)
    {
        if(s[i]=='Q')
        {
            qus++;
        }
        else
        {
            qus--;
        }
        if(qus<=0)
        {
            qus=0;
        }

    }
    if(qus==0) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    }
    return 0;
}