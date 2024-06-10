#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    int c1=0,c2=0,c3=0,c4=0,c5=0,ans=0;
    char ar[11][11];
    for(int i =1;i<=10;i++)
    {
        for(int j =1;j<=10;j++)
        {
            cin>>ar[i][j];
        }
    }
    for(int i =1;i<=10;i++)
    {
        for(int j =1;j<=10;j++)
        {
            if(ar[i][j]=='X')
            {
                if(i==1||i==10||j==1||j==10) c1++;
                else if(i==2||i==9||j==2||j==9) c2++;
                else if(i==3||i==8||j==3||j==8) c3++;
                else if(i==4||i==7||j==4||j==7) c4++;
                else if(i==5||i==6||j==5||j==6) c5++;
            }
        }
    }
    ans=c1*1+c2*2+c3*3+c4*4+c5*5;
    cout<<ans<<endl;
    }
    return 0;
}