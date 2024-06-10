// https://codeforces.com/contest/1703/problem/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
    string s;
    cin>>s;
    
    if((s[0]=='Y'||s[0]=='y')&&(s[1]=='e'||s[1]=='E')&&(s[2]=='S'||s[2]=='s')) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}