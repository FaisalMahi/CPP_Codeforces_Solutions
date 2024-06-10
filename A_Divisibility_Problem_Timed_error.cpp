#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
    long long int a,b,sum=0;
    cin>>a>>b;
    while(1)
    {
        if(a%b!=0)
        {
            sum++;
            a=a+1;
        }
        else if(a%b==0)
        {
            cout<<sum<<endl;
            break;
        }
    }
    }
    return 0;
}