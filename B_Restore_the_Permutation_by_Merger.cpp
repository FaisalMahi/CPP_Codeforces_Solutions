#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    int m,n; cin>>m; 
    n=m*2;
    int ar[n];
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i =0;i<n;i++)
    {
        for(int j =i+1;j<n;j++)
        {
            if(ar[i]==ar[j])
            {
                for(int k=j;k<n;k++)
                {
                    ar[k]=ar[k+1];
                }
                n--;
                j--;
            }
        }
    }
    for(int i =0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    }
    return 0;
}