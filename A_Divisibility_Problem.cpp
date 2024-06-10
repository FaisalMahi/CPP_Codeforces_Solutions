#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    long long int a,b,sum;
    cin>>a>>b;
    // long long int x=a/b;
    if(a%b!=0)
    {
        sum=(b-(a%b));
        // sum=((b*(x+1))-a);
    }
    else 
    {
        sum=0;
    }
    cout<<sum<<endl;
    }
    return 0;
}