#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    int n1,n2,count=0; cin>>n1>>n2;
    string s1, s2; cin>>s1>>s2;
    if(n1!=n2&&n1*2>n2)
    {
        count=-1;
    }
    else
    {
        while(n1<=n2)
        {
            count++;
            n1=n1*2;
        }
    }
    cout<<count<<endl;
    }
    return 0;
}