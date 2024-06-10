// https://codeforces.com/contest/1915/problem/B

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    char ch[3][3];
    for(int i =0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>ch[i][j];
        }
    }
    for(int i =0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(ch[i][j]=='?')
            {
                if(i==1)
                {
                    if(int(ch[0][j])+int(ch[2][j])==133) cout<<'A'<<endl;
                    else if(int(ch[0][j])+int(ch[2][j])==131) cout<<'C'<<endl;
                    else if(int(ch[0][j])+int(ch[2][j])==132) cout<<'B'<<endl;
                }
                else if(i==0)
                {
                    if(int(ch[1][j])+int(ch[2][j])==133) cout<<'A'<<endl;
                    else if(int(ch[1][j])+int(ch[2][j])==131) cout<<'C'<<endl;
                    else if(int(ch[1][j])+int(ch[2][j])==132) cout<<'B'<<endl;
                }
                else if(i==2)
                {
                    if(int(ch[0][j])+int(ch[1][j])==133) cout<<'A'<<endl;
                    else if(int(ch[0][j])+int(ch[1][j])==131) cout<<'C'<<endl;
                    else if(int(ch[0][j])+int(ch[1][j])==132) cout<<'B'<<endl;
                }
            }
        }
        
    }
    }
    return 0;
}