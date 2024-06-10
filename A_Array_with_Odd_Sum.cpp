// https://codeforces.com/problemset/problem/1296/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
    int n; cin>>n;
    int ar[n];
    int sum=0;
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+ar[i];
    }
    int ans=1;
    if(sum%2!=0)
    {
        cout<<"YES"<<endl;
    }
    else if(sum%2==0)
    {
        int i=n-1;
        while(i--)
        {
           if(ar[i]%2!=0&&ar[i+1]%2==0)
           {
            ans=0;
           }
           else if(ar[i+1]%2!=0&&ar[i]%2==0)
           {
            ans=0;
           }
        }        
        if(ans==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    }
    return 0;
}