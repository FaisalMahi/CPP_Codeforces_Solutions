#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    int n; cin>>n;
    int ar[n];
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,(ar+n));
    if(n==2)
    {
        if(ar[0]==ar[1]) cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            cout<<ar[0]<<" "<<ar[1]<<endl;
        }
    }
    else if(n%2==0)
    {
        cout<<"YES"<<endl;
        for(int i =0;i<n-1;i+=2)
        {
            cout<<ar[i]<<" ";
        }
        for(int i =1;i<n;i+=2)
        {
            cout<<ar[i]<<" ";
        }
        cout<<endl;
    }
    else if(n%2!=0)
    {
        cout<<"YES"<<endl;
        for(int i =0;i<n;i+=2)
        {
            cout<<ar[i]<<" ";
        }
        for(int i =1;i<n;i+=2)
        {
            cout<<ar[i]<<" ";
        }
        cout<<endl;
    }
    }
    return 0;
}