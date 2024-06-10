#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    int n,a,b; cin>>n>>a>>b;
    int cmp=a+b;
    if(n==a&&a==b) cout<<"Yes"<<endl;
    else
    {
        if(cmp<=n-2) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    }
    return 0;
}