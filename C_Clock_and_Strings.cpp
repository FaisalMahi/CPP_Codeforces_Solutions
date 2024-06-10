#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(c>a&&c<b||c<a&&c>b||d>a&&d<b||d<a&&d>b) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    return 0;
}