#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=0,c=0,o=0,d=0,i=0;
    int test; cin>>test;
    while(test--)
    {
        
        string s; cin>>s;
        if(s[0]=='T') t++;
        else if(s[0]=='C') c++;
        else if(s[0]=='O') o++;
        else if(s[0]=='D') d++;
        else i++;
        
    }
    long long int ans = 4*t+6*c+8*o+12*d+20*i;
    cout<<ans<<endl;
    return 0;
}