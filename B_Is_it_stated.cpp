#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,flag=0; cin>>test;
    while(test--)
    {
        string s; cin>>s;
        for(int i =0;i<s.length()-1;i++)
        {
            if(s[i]=='i'&&s[i+1]=='t') flag=1;
        }
        if(flag==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        flag=0;    
    }
    
    return 0;
}