#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    long long int n,count=0,i=1; cin>>n;
    for(int i =1;i<=n;i++)
    {
        if(i==1||i==2||i==3||i==4||i==5||i==6||i==7||i==8||i==9) count++;
        else if(i==10||i==20||i==30||i==40||i==50||i==60||i==70||i==80||i==90) count++;
        else if(i==100||i==200||i==300||i==400||i==500||i==600||i==700||i==800||i==900) count++;
        else if(i==1000||i==2000||i==3000||i==4000||i==5000||i==6000||i==7000||i==8000||i==9000) count++;
        else if(i==10000||i==20000||i==30000||i==40000||i==50000||i==60000||i==70000||i==80000||i==90000) count++;
        else if(i==100000||i==200000||i==300000||i==400000||i==500000||i==600000||i==700000||i==800000||i==900000||i==1000000) count++;

    }
    cout<<count<<endl;
    }    
    return 0;
}