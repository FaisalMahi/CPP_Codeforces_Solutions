#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    int n,neg=0,pos=0,ans=0; cin>>n;
    int ar[n];
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]<0) neg++;
        else pos++;
    }
    while(neg>pos)
    {
        neg--;
        pos++;
        ans++;
    }
    if(neg%2!=0) ans++;
    cout<<ans<<endl;
    }
    return 0;
}