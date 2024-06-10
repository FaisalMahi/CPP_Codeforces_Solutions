#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    int flag=0;
    string s; cin>>s;
    if(s.length()%2!=0)
    {
        flag=1;
    }
    else
    {
        int cmp = s.length()/2,j=0;
        for(int i =0;i<cmp;i++)
        {
            if(s[i]!=s[cmp+j])
            {
                flag=1;
                break;
            }
            j++;
        }
    }
    if(flag==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    return 0;
}