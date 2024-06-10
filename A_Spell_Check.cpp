#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    int n; cin>>n;
    string cmp="Timru";
    string s; cin>>s;
    sort(s.begin(),s.end());
    if(s==cmp) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    return 0;
}