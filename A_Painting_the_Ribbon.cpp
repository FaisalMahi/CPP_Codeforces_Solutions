#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
        int n,m,k; cin>>n>>m>>k;
        if(n-(n/m + (n%m != 0)) <= k) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
    return 0;
}