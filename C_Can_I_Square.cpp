// https://codeforces.com/contest/1915/problem/C

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int test; cin>>test;
    while(test--)
    {
    long long int n,sum=0;
    cin>>n;
    while(n--)
    {
        long long int num; cin>>num;
        sum=sum+num;
    }
    long long int ne=int(sqrt(sum));
    
    if(sum!=ne*ne) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    }
    
    return 0;
}