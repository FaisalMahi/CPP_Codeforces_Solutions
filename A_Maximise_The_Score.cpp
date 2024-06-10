#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
    int n; cin>>n;
    long long int count=0;
    int ar[2*n];
    for(int i =0;i<2*n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+(2*n));
    for(int i =0;i<2*n-1;i+=2)
    {
        if(ar[i]<=ar[i+1]) count=count+ar[i];
        else count=count+ar[i+1];
    }
    cout<<count;
    if(t>0) cout<<endl;
    }
    return 0;
}