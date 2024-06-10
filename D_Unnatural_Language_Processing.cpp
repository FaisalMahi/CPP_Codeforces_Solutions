// https://codeforces.com/contest/1915/problem/D

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    int n; cin>>n;
    string str;
    cin>>str;
    for(int i =0;i<n;i++)
    {
        if(str[i]=='b'||str[i]=='c'||str[i]=='d')
        {
            cout<<str[i];
        }
        else
        {
            cout<<str[i];

            if((str[i+1]=='b'||str[i+1]=='c'||str[i+1]=='d')&&(str[i+2]!='a'&&str[i+2]!='e'))
            {
                cout<<str[i+1];
                i++;
            }
            if(i!=n-1) cout<<".";
        }
        
    }
    cout<<endl;
    }
    return 0;
}