// https://codeforces.com/contest/1676/problem/B

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    int n,count=0,count_final=0; cin>>n;
    int ar[n];
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    for(int i =0;i<n;i++)
    {
        if(ar[i]>ar[0])
        {
            count=ar[i]-ar[0];
        }
        count_final = count_final+count;
    }
        cout<<count_final<<endl;
    }
    return 0;
}