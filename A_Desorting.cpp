#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    int n,ans=INT_MAX,MaxValue=-1; cin>>n;
    int ar[n];
    for(int i =0;i<n;i++)
    {
        int tmp;
        cin>>tmp;
        if(i==0)
        {
            ar[i]=tmp;
            MaxValue=tmp;
        }
        else if(i>0)
        {
            if(MaxValue>tmp)
            {
                ans=0;
                break;
            }
            else
            {
                ans=min((tmp-MaxValue)/2+1,ans);
                MaxValue=tmp;
                ar[i]=tmp;
            }
        }
    }
    cout<<ans<<endl;
    }
    return 0;
}