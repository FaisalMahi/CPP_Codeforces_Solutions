#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    int n,pos=0,neg=0;
    cin>>n;
    int ar[n];
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]<0)
        {
            neg=neg+ar[i];
        }
        else
        {
            pos=pos+ar[i];
        }
    }
    int ans=pos+((-1)*neg);
    cout<<ans<<endl;    
    }
    return 0;
}