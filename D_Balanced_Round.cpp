#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
            int n, k; cin>>n>>k;
    int ar[n];
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,(ar+n));
    long long int mx=0,ans=0,cons=0;
    for(int i=0;i<n;i++)
    {
        cons++;
        if(ar[i+1]-ar[i]>k || i==n-1)
        {
            mx=max(cons,mx);
            cons=0;
        }
    }
    ans=n-mx;
    cout<<ans<<endl;
    }
    return 0;
}