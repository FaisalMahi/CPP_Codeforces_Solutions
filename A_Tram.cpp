#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b; cin>>n;
    for(int i =0;i<n;i++)
    {
        cin>>a;
        int b1,total=0;
        b1=b-a;
        cin>>b;

        if(i==0)
        {
            total=a+b;
        }
        else
        {
            total = b1+b;
        }
        cout<<total<<endl;
        
    }
    return 0;
}