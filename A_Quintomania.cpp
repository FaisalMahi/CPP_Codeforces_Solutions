#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    int n; cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int flag=0;
    for(int i=0;i<n-1;i++)
    {
        if(ar[i]-ar[i+1]!=5&&ar[i]-ar[i+1]!=7&&ar[i]-ar[i+1]!=-5&&ar[i]-ar[i+1]!=-7)
        {
            flag=1;
            break;
        }
    }
    if(flag==1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    }
    return 0;
}