#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int test; cin>>test;
    while (test--)
    {
    int x,k; cin>>x>>k;
    if(x%k!=0)
    {
        cout<<1<<endl<<x<<endl;
    }
    else
    {
        cout<<2<<endl;
        cout<<x-k-1<<" "<<k+1<<endl;
    }
    }
    return 0;
}