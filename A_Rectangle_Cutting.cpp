#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    int a,b; cin>>a>>b;
    if(a%2==0&&b%2==0) cout<<"Yes"<<endl;
    else if(a%2!=0&&b%2!=0) cout<<"No"<<endl;
    else if(a%2==0||b%2==0)
    {
        if(a/2==b||b/2==a) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
    }
    return 0;
}