#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
        int ar[3];
        for(int i =0;i<3;i++)
        {
            cin>>ar[i];
        }
        sort(ar,(ar+3));
        if(ar[0]+ar[1]==ar[2]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}