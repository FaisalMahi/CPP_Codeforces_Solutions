#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    int n,a; cin>>n>>a;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,(ar+n));
    if(ar[n-1]<=a) cout<<"YES"<<endl;
    else if(ar[0]+ar[1]<=a) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    return 0;
}