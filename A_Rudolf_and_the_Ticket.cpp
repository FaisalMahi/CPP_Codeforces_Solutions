#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    int n,m,k,sum=0; cin>>n>>m>>k;
    int ar[n],ar1[m];
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i =0;i<m;i++)
    {
        cin>>ar1[i];
    }
    for(int i =0;i<n;i++)
    {
        for(int j =0;j<m;j++)
        {
            if(ar[i]+ar1[j]<=k)
            {
                sum++;
            }
        }
    }
    cout<<sum<<endl;
    }
    return 0;
}