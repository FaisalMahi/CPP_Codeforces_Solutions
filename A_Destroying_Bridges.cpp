#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test; 
    while(test--)
    {
    int a,b,ans=0,cmp; cin>>a>>b;
    cmp=a-1;
    if(cmp<=b) ans=1;
    else ans=a;
    cout<<ans<<endl;
    }
    return 0;
}