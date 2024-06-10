#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,time,count=0,remain_time=0; cin>>n>>time;
    for(int i =1;i<=n;i++)
    {
        remain_time=remain_time+(i*5);
        if(remain_time+time<=240)
        {
            count++;
        }
        else 
        {
            break;
        }
    }
    cout<<count;
    return 0;
}