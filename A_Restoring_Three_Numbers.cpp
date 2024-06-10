#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int ar[4];
    for(int i =0;i<4;i++)
    {
        cin>>ar[i];
    }
    sort(ar,(ar+4));
    long long int ans1,ans2,ans3;
    ans1=ar[3]-ar[2];
    ans2=ar[0]-ans1;
    ans3=ar[2]-ans2;
    cout<<ans1<<" "<<ans2<<" "<<ans3;
    return 0;
}