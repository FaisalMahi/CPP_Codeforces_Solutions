#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[3];
    for(int i =0;i<3;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+3);
    int ans=ar[2]-ar[0];
    cout<<ans;
    return 0;
}