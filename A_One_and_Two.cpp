#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test; 
    while(test--)
    {
    int n,two=0,one=0; cin>>n;
    int ar[n];
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]==2) two++;
        else one++;
    }
    if(two==0) cout<<1<<endl;
    else if(two%2==0)
    {
        int count=0;
        int m=two;
        for(int i =0;i<n;i++)
        {
            if(ar[i]==2)
            {
                m--;
                count++;
                if(count==m)
                {
                    cout<<i+1<<endl;
                }
            }
        }
    }
    else cout<<-1<<endl;
    }
    return 0;
}