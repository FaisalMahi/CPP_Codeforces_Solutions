#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
            int a,b,c,d,sum=0; cin>>a>>b>>c>>d;
    sum=a+b+c+d;
    if(sum%3!=0) cout<<"NO"<<endl;
    else
    {
        if(sum%3==0)
        {
            int cmp=sum/3;
            if(cmp<a||cmp<b|cmp<c) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
    }
    return 0;
}