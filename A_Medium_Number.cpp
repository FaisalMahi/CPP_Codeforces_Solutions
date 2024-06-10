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
        sort(ar,ar+3);
        cout<<ar[1]<<endl;
    }
    return 0;
}