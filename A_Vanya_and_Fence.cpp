#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,s=0,l=0; cin>>n>>m;
    int ar[n];
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]>m) l++;
        else s++;
    }
    int ans=(s*1)+(l*2);
    cout<<ans;
    return 0;
}