// https://codeforces.com/problemset/problem/1919/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
        int a,b,ans; cin>>a>>b;
        ans=a+b;
        if(ans%2==0) cout<<"Bob"<<endl;
        else cout<<"Alice"<<endl;
    }
    return 0;
}