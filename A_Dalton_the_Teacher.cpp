#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    int n,cnt=0; cin>>n;
    int ar[n];
    for(int i =1;i<=n;i++)
    {
        cin>>ar[i];
        if(ar[i]==i) cnt++;
    }
    cout<<(cnt+1)/2<<endl;
    }
    return 0;
}