#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
       long long int n,ans=0; cin>>n;
       for(long long int i =1;;i++)
       {
            if(n%i!=0)
            {
                ans=i-1;
                break;
            }
       }
       cout<<ans<<endl;
    }
    return 0;
}