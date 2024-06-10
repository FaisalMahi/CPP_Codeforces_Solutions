#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    string s; cin>>s;
    for(int i=0;i<s.length();i++)
    {
        for(int j=i;j<i+1;j++)
        {
            for(int k=i;k<=i+1;k++)
            {
                cout<<s[k];
            }
            cout<<endl;
        }
    }
    return 0;
}