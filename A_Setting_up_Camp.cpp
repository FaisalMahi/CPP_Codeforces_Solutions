#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    int a,b,c; cin>>a>>b>>c;
    int cmp=b%3;
    if(cmp!=0)
    {
        if(cmp+c<3) cout<<-1<<endl;
    else
    {
    int bc=b+c;

    if(bc%3==0)
    {
        cout<<a+(bc/3)<<endl;
    }
    else
    {
        cout<<a+(bc/3)+1<<endl;
    }
    }
    }
    else
    {
    int bc=b+c;

    if(bc%3==0)
    {
        cout<<a+(bc/3)<<endl;
    }
    else
    {
        cout<<a+(bc/3)+1<<endl;
    }
    }
    }
    return 0;
}