#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test; 
    while(test--)
    {
    long long int n,mx=0,mn=0; cin>>n;
    int ar[n];
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,(ar+n));
    mn=ar[0]; mx=ar[n-1];
    long long int mn_cnt=0,mx_cnt=0;
    for(int i =0;i<n;i++)
    {
        if(ar[i]==mn) mn_cnt++;
        else if(ar[i]==mx) mx_cnt++;
    }
    long long int ans=0;
    if(ar[0]==ar[n-1])
    {
        ans=n*(n-1);
    }
    else 
    {
        ans=2*(mx_cnt*mn_cnt);
    }
    cout<<ans<<endl;
    }
    return 0;
}