#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    long long int n,min=100,ans=1; cin>>n;
    int ar[n];
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]<=min) min=ar[i];
    }
    for(int i =0;i<n;i++)
    {
        if(ar[i]==min)
        {
            ar[i]=min+1;
            break;
        }
    }
    for(int i =0;i<n;i++)
    {
        ans=ans*ar[i];
    }
    cout<<ans<<endl;
    }
    return 0;
}