#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    int n,count=1,flag=0; cin>>n;
    int ar[n];
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,(ar+n));
    for(int i =0;i<n-1;i++)
    {
        if(ar[i]==ar[i+1])
        {
            count++;
        }
        else count=1;
        if(count>=3)
        {

            cout<<ar[i]<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0) cout<<-1<<endl;
    }
    return 0;
}