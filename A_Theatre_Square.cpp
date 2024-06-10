#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c; cin>>a>>b>>c;
    a=a/c + (a%c!=0);
    b=b/c + (b%c!=0);
    cout<<a*b;
    return 0;
}