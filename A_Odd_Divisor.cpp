#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int test; cin>>test;
    while(test--)
    {
    long long int n,flag=0; cin>>n;
    if(n%2!=0) cout<<"YES"<<endl;
    else
    {
        while(n>1)
        {
            n=n/2;
            if(n%2!=0&&n!=1)
            {
            flag=1;
            break;
            }
        }
        if(flag==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    }
    return 0;
}