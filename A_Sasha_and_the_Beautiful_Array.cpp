#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    int n, min=0,max=INT_MAX; cin>>n;
    int ar[n];
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i =0;i<n;i++)
    {
        if(ar[i]>=min) min=ar[i];
        if(ar[i]<=max) max=ar[i];
    }
    int ans= min-max;
    cout<<ans<<endl;
    }
    return 0;
}