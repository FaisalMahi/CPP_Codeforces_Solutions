#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,cnt=0; cin>>n>>k;
    int ar[n];
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
        if((ar[i]+k)<=5) cnt++;
    }
    // int ar1[n];
    // for(int i =0;i<n;i++)
    // {
    //     ar1[i]=ar[i]+k;
    //     if(ar1[i]<=5) cnt++;
    // }  
    cout<<cnt/3<<endl;
    return 0;
}