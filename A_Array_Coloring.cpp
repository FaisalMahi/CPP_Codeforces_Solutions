#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
        int n,sum=0; cin>>n;
        int ar[n];
        for(int i =0;i<n;i++)
        {
            cin>>ar[i];
            sum=sum+ar[i];
        }
        if(sum%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}