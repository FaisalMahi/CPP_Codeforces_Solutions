#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    unsigned long long int a,b,c,ans_a=0,ans_b=0; cin>>a>>b>>c;

    if(a==b&&b==c)
    {
        cout<<4<<endl;
        continue;
    }
    if(a<=c)
    {
        ans_a=c/a;
    }
    if(b<=c)
    {
        ans_b=c/b;
    }
    unsigned long long int ans =ans_a+ans_b+2;
    cout<<ans<<endl;
    }
    return 0;
}