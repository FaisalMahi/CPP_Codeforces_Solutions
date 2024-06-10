#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    long long int n,sum=0; cin>>n;
    int ar[n];
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
        sum=sum+ar[i];
    }

    int check=sum%3;
    int chk=3-check;
    if(chk==3)
    {
        cout<<0;
    }
    for(int i =0;i<n;i++)
    {
        if(n==1)
        {
            cout<<1;
        }
        else if(chk==1)
        {
            if(ar[i]==1)
            {
                cout<<1;
                break;
            }
            else
            {
                cout<<1;
                break;
            }
        }
        else if(chk==2)
        {
            if(ar[i]==2)
            {
                cout<<1;
                break;
            }
            else
            {
                cout<<2;
                break;
            }
        }
    }
    if(test!=0) cout<<endl;
    }
    return 0;
}