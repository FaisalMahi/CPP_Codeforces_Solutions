#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    int n,count=0; cin>>n;
    int ar[n];
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i =0;i<n-1;i++)
    {
        if(ar[i]%2!=0&&ar[i+1]%2!=0) count++;
        else if(ar[i]%2==0&&ar[i+1]%2==0) count++;
    }
    cout<<count<<endl;
    }
    return 0;
}