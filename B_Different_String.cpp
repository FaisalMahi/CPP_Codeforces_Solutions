#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    string s1,s2; cin>>s1;
    s2=s1;
    sort(s1.begin(),s1.end());
    if(s1[0]==s1[s1.length()-1]) cout<<"NO"<<endl;
    else
    {
        if(s1==s2)
        {
            int tmp=s1[0];
            s1[0]=s1[s1.length()-1];
            s1[s1.length()-1]=tmp;
        }
        cout<<"YES"<<endl;
        cout<<s1<<endl;
    }
    }
    return 0;
}