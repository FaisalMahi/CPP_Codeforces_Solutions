#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;cin>>test;
    while(test--)
    {
    long long int a,b,ans; cin>>a>>b;
    ans = (a*b)/__gcd(a,b);
    if(ans<=a||ans<=b) ans=ans*(b/a);
    cout<<ans<<endl;
    }
    return 0;
}