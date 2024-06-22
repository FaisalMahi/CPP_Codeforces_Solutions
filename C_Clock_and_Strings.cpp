#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
            int a,b,c,d; cin>>a>>b>>c>>d;
    int flag1=0,flag2=0;
    int maximum= max(a,b);
    int minimum=min(a,b);
    for(int i =minimum;i<=maximum;i++)
    {
        if(i==c)
        {
            flag1=1;
        }
        if(i==d)
        {
            flag2=1;
        }
    }
    if(flag1!=flag2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    return 0;
}