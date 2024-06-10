// https://codeforces.com/problemset/problem/1903/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
        int n,k,ans=0; cin>>n>>k;
        int ar[n];
        for(int i =0;i<n;i++)
        {
            cin>>ar[i];
        }
        for(int i =0;i<n-1;i++)
        {
            if((k==1)&&(ar[i]>ar[i+1])) ans=1;
        }
        if(ans==1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}