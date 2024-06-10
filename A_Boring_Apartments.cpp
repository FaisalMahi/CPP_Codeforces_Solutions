#include<bits/stdc++.h>
using namespace std;
int main()
{
    int temp; cin>>temp;
    while(temp--)
    {
            int n,find=0; cin>>n;
    int cmp=n%10;
    while(n>0)
    {
        find++;
        n=n/10;
    }
    int ans=0;
    if(cmp>=2)
    {
        if(find==1)
        {
            ans=(cmp-1)*10+1;
        }
        else if(find==2)
        {
            ans=(cmp-1)*10+3;
        }
        else if(find==3)
        {
            ans=(cmp-1)*10+6;
        }
        else
        {
            ans=(cmp-1)*10+10;
        }
    }
    else
    {
                if(find==1)
        {
            ans=1;
        }
        else if(find==2)
        {
            ans=3;
        }
        else if(find==3)
        {
            ans=6;
        }
        else
        {
            ans=10;
        }
    }
    cout<<ans<<endl;
    }
    return 0;
}