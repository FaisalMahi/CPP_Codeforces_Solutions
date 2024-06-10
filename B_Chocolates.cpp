#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int ar[n];
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
    }
    
    for(int i =n-1;i>=1;i--)
    {
        if(ar[i]>ar[i-1]) ar[i]=ar[i];

        else if(ar[i]<=ar[i-1])
        {
            if(ar[i]==0)ar[i-1]=0;
            else
            {
                ar[i-1]=ar[i]-1;
            }
        }
    }
    long long int sum=0;
    for(int i =n-1;i>=0;i--)
    {
        sum=sum+ar[i];
    }
    cout<<sum;
    return 0;
}