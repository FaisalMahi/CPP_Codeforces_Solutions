#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    int a,b,max=-1; cin>>a>>b;
    int ar[a];
    for(int i =0;i<a;i++)
    {
        cin>>ar[i];
    }
    if(a==1)
    {
        max=ar[0];
    }
    else
    {
    for(int i =0;i<a-1;i++)
    {
        if(ar[i+1]-ar[i]>=max)
        {
            max=ar[i+1]-ar[i];
        }
    }
    }
    int d=2*(b-ar[a-1]);
    int f=(ar[0]-0);
    int mx;
    if(f>=d) mx=f;
    else mx=d;
    if(mx>=max)
    {
        cout<<mx<<endl;
    }
    else cout<<max<<endl;
    }
    return 0;
}