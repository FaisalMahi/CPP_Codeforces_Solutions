#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test; 
    while(test--)
    {
    int n,m,c; cin>>n>>m>>c;
    if(m==1)
    {
        cout<<"NO"<<endl;
    }
    else if((n%m==1)&&(c==1))
    {
        cout<<"NO"<<endl;
    }
    else
    {
       cout<<"YES"<<endl;
       cout<<n<<endl;
       for(int i =0;i<n;i++)
       {
        cout<<1<<" ";
       }
       cout<<endl;
    }
    }
    return 0;
}