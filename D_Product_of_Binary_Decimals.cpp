#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    long long int n,ans,flag_ans=0,flag_n=0; cin>>n;
    ans=n;
    if(n==1||n==10||n==11||n==100||n==101||n==110||n==111||n==1000||n==1001||n==1010||n==1011||n==1100||n==1101||n==1110||n==1111||n==10000)
    {
        cout<<"YES"<<endl;
    }
    else if(n==10001||n==10010||n==110||n==10011||n==10100||n==10101||n==10110||n==10111||n==11000||n==11001||n==11010||n==11011||n==11100)
    {
        cout<<"YES"<<endl;
    }
    else if(n==11101||n==11110||n==11111||n==100000)
    {
        cout<<"YES"<<endl;
    }
    else
    {
    while(ans%11==0)
    {
        ans=ans/11;
    }
    while(ans>0)
    {
        long long int f=ans%10;
        ans=ans/10;
        if(f>1)
        {
            flag_ans=1;
            break;
        }
    }
    if(flag_ans==1||flag_n==1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    }
    }
    return 0;
}