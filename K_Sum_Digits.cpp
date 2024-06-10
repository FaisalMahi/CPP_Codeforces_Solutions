#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        sum=sum+s[i]-48;
    }
    cout<<sum;
    
    return 0;
}