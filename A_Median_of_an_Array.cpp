#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    int n,ans=0; cin>>n;
    int ar[n];
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,(ar+n));
    if(n==1) ans=1;
    else
    {

    }
    cout<<ans<<endl;
    }
    return 0;
}