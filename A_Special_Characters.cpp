#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    int n; cin>>n; 
    if(n%2!=0) cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        int output=n/2;
        for(int i=1;i<=output;i++)
        {
            if(i%2==0) cout<<"AA";
            else cout<<"BB";
        }
        cout<<endl;
    }
    }
    return 0;
}