#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    int a,t_x,t_y,x=0,y=0,flag=0; cin>>a>>t_x>>t_y;
    string s; cin>>s;
        for (int i = 0; i < 1000; i++) {
            for (char move : s) {
                if (move == 'N') y++;
                else if (move == 'E') x++;
                else if (move == 'S') y--;
                else if (move == 'W') x--;
                if (x == t_x && y == t_y) {
                    flag=1;
                    break;
                }
            }
        }
    if(flag==0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    }
    return 0;
}