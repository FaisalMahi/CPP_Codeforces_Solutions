#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    int n,cons=0,ans=0,count=1,n1=0,n2=0; cin>>n;
    int ar[n];
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,(ar+n));
    for(int i =0;i<n-1;i++)
    {
        if(ar[i]!=ar[i+1])
        {
            count++;
        }
    }
    for(int i =0;i<n;i++)
    {
        if(count==2)
        {
            if(ar[i]==ar[0]) n1++;
            else n2++;
        }
    }
    if(count==1)
    {
        cout<<"Yes"<<endl;
    }
    else if(count==2)
    {
        if(n1==n2 || n1==n2-1 || n1==n2+1)
        {
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }
    else cout<<"No"<<endl;
    }
    return 0;
}