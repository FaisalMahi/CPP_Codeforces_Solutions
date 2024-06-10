#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    int n; cin>>n;
    string s,s1; cin>>s;
    s1=s;
    reverse(s.begin(), s.end());
    if(s1<=s)
    {
        cout<<s1<<endl;
    }
    else
    {
        cout<<s+s1<<endl;
    }
    }
    return 0;
}