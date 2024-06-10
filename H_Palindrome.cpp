#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    if(n==1) cout<<"NO"<<endl;
    else if(n==2) cout<<"NO"<<endl<<"YES"<<endl;
    else
    {
        if(n%2==0)
        {
        int m=n/2;
        for(int i =1;i<=m;i++)
        {
            if(i%2!=0) cout<<"NO"<<endl<<"NO"<<endl;
            else cout<<"YES"<<endl<<"YES"<<endl;
        }
        }
        else
        {
        int m=(n-1)/2;
        for(int i =1;i<=m;i++)
        {
            if(i%2!=0) cout<<"NO"<<endl<<"NO"<<endl;
            else cout<<"YES"<<endl<<"YES"<<endl;
        }
        int check =m/2;
        if(check%2==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        }
    }
    while(n--)
    {
        string s; cin>>s;
    }
        
    return 0;
}