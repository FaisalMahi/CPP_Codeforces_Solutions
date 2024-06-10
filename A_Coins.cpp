#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    long long int a,b; cin>>a>>b;
    if(a%2==0) cout<<"YES"<<endl;
    else
    {
        if((a%b)%2==0) cout<<"YES"<<endl;
        else if((a-b)%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    }    
    return 0;
}