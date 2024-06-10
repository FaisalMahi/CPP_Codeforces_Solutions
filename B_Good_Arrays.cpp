#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    long long int n,cnt1=0,cnt_gt1=0,sum=0; cin>>n;
    int ar[n];
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]==1) cnt1++;
        else cnt_gt1++;
        if(ar[i]>1) sum=sum+ar[i];
    }
    long long int cmp=sum-cnt_gt1;
    if(n==1) cout<<"NO"<<endl;
    else if(cmp>=cnt1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    return 0;
}