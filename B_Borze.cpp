#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin>>s;
    for(int i =0;i<s.length();i++)
    {
        if(s[i]=='-')
        {
            if(s[i+1]=='.')
            {
                cout<<1;
                i++;
                continue;
            }
            else if(s[i]=='-')
            {
                cout<<2;
                i++;
                continue;
            }
        }
        else if(s[i]=='.')
        {
            cout<<0;
            continue;
        }

    }
    return 0;
}