#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
        int count=0;
        int ar[4];
        for(int i =0;i<4;i++)
        {
            cin>>ar[i];
            if(ar[i]>ar[0]) count++;
        }
        cout<<count<<endl;
    }
    return 0;
}