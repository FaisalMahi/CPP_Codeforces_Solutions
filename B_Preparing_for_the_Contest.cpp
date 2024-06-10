// https://codeforces.com/contest/1914/problem/B

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    int n,k,m;
    cin>>n>>k;
    m=n-k;

    for(int i =m;i<=n;i++)
    {
        cout<<i<<" ";
    }
    for(int i =m-1;i>=1;i--)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    }
    
    return 0;
}