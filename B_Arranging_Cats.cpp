#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
    int n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    
    int one_s1=0, one_s2=0,cnt=0;

    for(int i =0;i<n;i++)
    {
        if(s1[i]=='1') one_s1++;
        if(s2[i]=='1') one_s2++;
        if(s1[i]!=s2[i]&&s2[i]=='1') cnt++;
    }
    if(one_s1>one_s2)
    {
        cnt=cnt+(one_s1-one_s2);
        cout<<cnt<<endl;
    }
    else cout<<cnt<<endl;
    }
    return 0;
}