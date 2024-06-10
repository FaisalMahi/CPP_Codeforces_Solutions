#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    int n,cmp; cin>>n;
    cmp=n+1;
    int ar[n];
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
        ar[i]=cmp-ar[i];
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    }
    return 0;
}