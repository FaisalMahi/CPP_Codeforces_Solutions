#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int ar[n];
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i =1;i<=n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(ar[j]==i) cout<<j+1<<" ";
        }
    }
    return 0;
}