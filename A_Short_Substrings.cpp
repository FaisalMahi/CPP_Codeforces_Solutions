#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    string s; cin>>s;
    if(s.length()==2) cout<<s;
    else
    {
        cout<<s[0];
        for(int i =1;i<s.length();i+=2)
        {
            cout<<s[i];
        } 
    }
        cout<<endl;
    }
    return 0;
}