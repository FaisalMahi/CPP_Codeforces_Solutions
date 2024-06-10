// https://codeforces.com/contest/977/problem/C
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int ar[n];
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    if(m==0)
    {
        if(ar[0]==1) cout<<-1<<endl;
        else cout<<1<<endl;
    }
    else 
    {
    if(ar[m-1]==ar[m]) cout<<-1<<endl;
    else cout<<ar[m-1]<<endl;
    }
    
    return 0;
}