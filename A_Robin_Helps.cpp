#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    int a, b; cin>>a>>b;
    int ar[a];
    int cnt_0=0;
    for(int i =0;i<a;i++)
    {
        cin>>ar[i];
        if(ar[i]==0) cnt_0++;
    }
    sort(ar,(ar+a));
    int ans=min(cnt_0,ar[a-1]);
    cout<<ans<<endl;
    }
    return 0;
}