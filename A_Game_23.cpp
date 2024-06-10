// https://codeforces.com/problemset/problem/1141/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(m%n!=0)
    {
        cout<<-1<<endl;
        return 0;
    }
    int x=m/n,count=0;

    while(x%2==0)
    {
        x=x/2;
        count++;
    }
    while(x%3==0)
    {
        x=x/3;
        count++;
    }
    if(x==1) cout<<count<<endl;
    else cout<<-1<<endl;

    return 0;
}