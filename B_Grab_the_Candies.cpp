#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    for(int j=0;j<num;j++)
    {
            int n,even=0,odd=0;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<n;i++)
    {
        if(ar[i]%2==0)
        {
            even=even+ar[i];
        }
        else if(ar[i]%2!=0)
        {
            odd=odd+ar[i];
        }
    }
    if(even>odd)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    }
    return 0;
}