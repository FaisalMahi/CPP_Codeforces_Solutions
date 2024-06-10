#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
        int a,b,c; cin>>a>>b>>c;
        if(a+b>=10||a+c>=10||b+c>=10) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}