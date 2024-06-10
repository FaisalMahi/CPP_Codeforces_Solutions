// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/L
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>> test;
    while(test--)
    {
    int n;
    cin>>n;
    int ar[n];
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i =0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int mx = INT_MIN;
            for(int k=i;k<=j;k++)
            {   
                if(ar[k]>=mx)
                {
                    mx=ar[k];
                }                
            }
            cout<<mx<<" ";
        }
    }
    cout<<endl;
    }
    return 0;
}