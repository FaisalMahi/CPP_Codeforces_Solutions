#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,ans1=0,ans2=0;
    cin>>a>>b;
    if(a==b)
    {
        ans1=a;
        ans2=0;
    }
    else
    {
        if(a<b)
        {
            ans1=a;
            ans2=(b-a)/2;
        }
        else
        {
            ans1=b;
            ans2=(a-b)/2;
        }
    }
    cout<<ans1<<" "<<ans2<<endl;
    return 0;
}