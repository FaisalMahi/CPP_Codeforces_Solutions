#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    int n,sum=0; cin>>n;
    int ar[n-1];
    for(int i =0;i<n-1;i++)
    {
        cin>>ar[i];
        sum=sum+ar[i];
    }
    cout<<sum*(-1)<<endl;
    }
    return 0;
}