#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,sum=0; cin>>a>>b>>c;
    for(int i =1;i<=c;i++)
    {
        sum=sum+(i*a);
    }
    int ans = sum-b;
    if(ans<=0) cout<<"0";
    else cout<<ans; 
    return 0;
}