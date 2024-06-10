#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,min=100002,sum=0; cin>>n;
    int ar[n];
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]<=min)
        {
            min=ar[i];
        }
    }
    for(int i =0;i<n;i++)
    {
        if(ar[i]==min)
        {
            sum++;
        }
    }
    if(sum%2==0) cout<<"Unlucky"<<endl;
    else cout<<"Lucky"<<endl;
    return 0;
}