#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k; cin>>n>>k;
    int ar[n];
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
    }
    k=ar[k-1];
    int count=0;
    for(int i =0;i<n;i++)
    {
        if(k==0)
        {
            if(ar[i]>k) count++;
        }
        else if(ar[i]>=k) count++;
    }
    cout<<count<<endl;
    return 0;
}