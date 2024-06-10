#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    int n,even_ind0=0,odd_ind0=0,even_ind1=0,odd_ind1=0; cin>>n;
    int ar[n];
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i =0;i<n;i+=2)
    {
        if(ar[i]%2!=0) odd_ind0++;
        else even_ind0++;
    }
    for(int i =1;i<n;i+=2)
    {
        if(ar[i]%2!=0) odd_ind1++;
        else even_ind1++;
    }
    int flag=0;
    if(even_ind0!=0 && odd_ind0 !=0) flag=1;
    else if(even_ind1!=0 && odd_ind1 !=0) flag=1;
    if(flag==1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    }
    return 0;
}