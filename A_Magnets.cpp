#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0; cin>>n;
    int ar[n];
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
        
    }
    for(int i =0;i<n;i++)
    {
        if(ar[i]!=ar[i+1]) count++;
    }
    
    cout<<count;
    return 0;
}