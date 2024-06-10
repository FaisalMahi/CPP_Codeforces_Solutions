// https://codeforces.com/problemset/problem/1916/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
    long long int n,k,sum=1;
    cin>>n>>k;
    int ar[n];
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i =0;i<n;i++)
    {
        sum=sum*ar[i];
    }
    if(2023%sum!=0) cout<<"NO"<<endl;
    else
    {
        int ans = 2023/sum;

        cout<<"YES"<<endl;
        cout<<ans<<" ";
        for(int i =1;i<k;i++)
        {
            cout<<1<<" ";
        }
        cout<<endl;
    }
    }
    return 0;
}