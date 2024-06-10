#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,cmp=0; cin>>n>>k;
    int ar[n];
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
        if(k%ar[i]==0)
        {
            cmp=max(cmp,ar[i]);
        }
    }
    cout<<k/cmp;
    return 0;
}