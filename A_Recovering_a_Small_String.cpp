#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    int n; cin>>n;
    if(n==27) cout<<"aay"<<endl;
    else if(n==52) cout<<"ayz"<<endl;
    else if(n<=26)
    {
        char a,b,c;
        a=n-2;
        a=char(a+'a'-1);
        b='a',c='a';
        cout<<c<<b<<a<<endl;
    } 
    else if((n>=26&&n!=27)||(n>=26&&n!=52))
    {
        int n1=n/26;
        n=n%26;
        if(n1==3) cout<<"zzz"<<endl;
        else if(n1==2)
        {
            cout<<char(n+'a'-1)<<"zz"<<endl;
        }
        else
        {
            cout<<"a"<<char(n+'a'-2)<<"z"<<endl;
        }
    }
    }
    return 0;
}