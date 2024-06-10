#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    int n,minimum=INT_MAX,maximum=INT_MIN; cin>>n;
    int ar[n];
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]<=minimum) minimum=ar[i];
        if(ar[i]>=maximum) maximum=ar[i];
    }
    cout<<maximum-minimum<<endl;
    }
    return 0;
}