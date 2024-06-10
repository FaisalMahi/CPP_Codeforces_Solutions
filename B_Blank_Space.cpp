#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test; 
    while(test--)
    {
    int n,ans=0,cons=0; cin>>n;
    int ar[n];
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i =0;i<n;i++)
    {
        if(ar[i]==1) continue;
        cons++;
        if(i==n-1 || ar[i+1]!=ar[i])
        {
            ans=max(cons,ans);
            cons=0;
        }
    }
    cout<<ans<<endl;
    }
    return 0;
}