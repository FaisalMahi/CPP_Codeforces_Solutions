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
    if(ar[0]>ar[1])
    {
        cout<<"First"<<endl;
    }
    else if(ar[0]<ar[1])
    {
        cout<<"Second"<<endl;
    }
    else if(ar[0]==ar[1])
    {
        if(ar[2]%2==0) cout<<"Second"<<endl;
        else cout<<"First"<<endl;
    }
    }
    return 0;
}