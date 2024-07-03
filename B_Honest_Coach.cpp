#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    int n; cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,(ar+n));
    int mn=5100;
    for(int i=0;i<n-1;i++)
    {
        int cmp = ar[i+1]-ar[i];
        if(cmp<=mn) mn=cmp;
    }
    cout<<mn<<endl;
    }
    return 0;
}