#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,ans=0; cin>>a>>b;
    while(1)
    {
        ans++;
        a=a*3;b=b*2;
        if(a>b) break;
    }
    cout<<ans;
    return 0;
}