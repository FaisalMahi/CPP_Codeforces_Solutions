#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    int n,m,count=0; cin>>n>>m;
    string s; cin>>s;
    for(int i =0;i<s.length();i++)
    {
        if(s[i]=='B')
        {
            count++;
            i+=m-1;
        }
    }
    cout<<count<<endl;
    }
    return 0;
}