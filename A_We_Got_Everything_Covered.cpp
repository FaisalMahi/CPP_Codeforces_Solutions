// https://codeforces.com/problemset/problem/1925/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    int n,k; cin>>n>>k;
    for(int j=0;j<n;j++)
    {
    for(int i =0;i<k;i++)
    {
        cout<<char(i+'a');
    }
    }
    cout<<endl;
    }
    return 0;
}