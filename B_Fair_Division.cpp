#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    int n,cnt_1=0,cnt_2=0,flag=0; cin>>n;
    int ar[n];
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]==1) cnt_1++;
        else cnt_2++;
    }
    if(n==2)
    {
        if(ar[0]==ar[1]) flag=1;
        else flag=0;
    }
    else if(n==1)
    {
        flag=0;
    }
    else
    {
        if(cnt_1%2!=0) flag=0;
        else if(cnt_1==0&&cnt_2%2!=0) flag=0;
        else flag=1;
    }
    if(flag==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    return 0;
}