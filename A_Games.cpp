#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0; cin>>n;
    int ar[n],ar1[n];
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
        cin>>ar1[i];
    }
    for(int i =0;i<n;i++)
    {
        for(int j =0;j<n;j++)
        {
            if(ar[i]==ar1[j])
            {
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}