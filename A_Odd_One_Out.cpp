// https://codeforces.com/contest/1915/problem/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
    int a,b,c;
    cin>>a>>b>>c;
    if(a!=b&&a!=c) cout<<a<<endl;
    else if(b!=a&&b!=c)cout<<b<<endl;
    else cout<<c<<endl;
    }
    return 0;
}