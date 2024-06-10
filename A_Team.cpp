#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,sum=0; cin>>test;
    while(test--)
    {
        int ar[3];
        cin>>ar[0]>>ar[1]>>ar[2];
        if(ar[0]+ar[1]+ar[2]>=2) sum+=1;
    }
    cout<<sum;
    return 0;
}