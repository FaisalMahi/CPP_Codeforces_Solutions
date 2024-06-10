#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, m,ans=0,sum=0,tmp; cin>>n>>m;
    long long int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        sum=sum+ar[i];
    }
    if(sum>0)
    {
        int i =0;
        while(i<=m)
        {
            tmp=sum;
            sum=sum*2;
            i++;
            
        }
        cout<<tmp<<" ";
    }
    return 0;
}