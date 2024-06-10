#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag=1; cin>>n;
    int ar[n];
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]==1)
        {
            flag=0;
            break;
        }
    }
    if(flag==0) cout<<"HARD";
    else cout<<"EASY";
    return 0;
}