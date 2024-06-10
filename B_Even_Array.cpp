#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    int n,even=0,odd=0,count=0; cin>>n;
    int ar[n];
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
        if(i%2==0&&ar[i]%2!=0) even++;
        else if(i%2!=0&&ar[i]%2==0) odd++;
    }
    if(even==odd) cout<<even<<endl;
    else if(even!=odd) cout<<-1<<endl;
    }
    return 0;
}