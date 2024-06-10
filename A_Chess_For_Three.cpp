#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
            int a,b,c; cin>>a>>b>>c;
    if(a!=0&&(a==b&&b==c))
    {
        cout<<-1<<endl;
    }
    else
    {
        if(a%2==0)
        {
            int ans=(a/2)+(b-(a/2));
            cout<<ans<<endl;
        }
        else
        {
            int ans=((a/2)+(b-(a/2))+2);
            cout<<ans<<endl;
        }
    }
    }
    return 0;
}