#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    int n,a,b,cmp,total=0; cin>>n>>a>>b;
    cmp=n/2;
    if(n%2==0)
    {
        int a1= cmp*b;
        int a2=n*a;
        total = min(a1,a2);
    }
    else
    {
        int a1= (cmp*b)+a;
        int a2=n*a;
        total = min(a1,a2);
    }
    cout<<total<<endl;
    }
    return 0;
}