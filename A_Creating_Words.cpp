#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
            string s1,s2,s3,s4; cin>>s1>>s2;
    s3=s1;
    s4=s2;
    s1[0]=s2[0];
    s4[0]=s3[0];
    cout<<s1<<" "<<s4;
    cout<<endl;
    }
    return 0;
}