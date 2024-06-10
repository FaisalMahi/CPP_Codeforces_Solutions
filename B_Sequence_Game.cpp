#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    int n,flag=0,flag1=0; cin>>n;
    int ar[n];
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i =0;i<n-1;i++)
    {
        if(ar[i]+1!=ar[i+1])
        {
            flag=1;
            break;
        }
    }
    for(int i =0;i<n-1;i++)
    {
        if(ar[i]!=ar[i+1])
        {
            flag1=1;
            break;
        }
    }
    if((flag==0)||flag1==0)
    {
        cout<<n<<endl;
        for(int i =0;i<n;i++)
        {
            cout<<ar[i]<<" ";
        }
        cout<<endl;
    }
    else 
    {
        cout<<n+1<<endl;
        for(int i =0;i<n;i++)
        {
            cout<<ar[i]<<" ";
        }
        cout<<ar[n-1]<<endl;
    }
    return 0;
    }
}