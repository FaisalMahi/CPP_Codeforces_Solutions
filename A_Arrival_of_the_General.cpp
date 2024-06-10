#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,max=INT_MIN,min=INT_MAX,max_i=0,min_i=0; cin>>n;
    int ar[n];
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i =0;i<n;i++)
    {
            if(ar[i]>=max)
            {
                max=ar[i];
                max_i=i;
            }
            if(ar[i]<=min)
            {
                min=ar[i];
                min_i = i;
            }
    }
    if(ar[max_i]==ar[0]&&ar[min_i]==ar[n-1])
    {
        cout<<0;
    }
    else if(max_i>min_i)
    {
        cout<<max_i+(n-1)-min_i-1;
    }
    else cout<<max_i+(n-1)-min_i;
    
    return 0;
}