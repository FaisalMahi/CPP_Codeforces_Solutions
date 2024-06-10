#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b; cin>>a>>b;
    for(int i =0;i<a.length();i++)
{
    if(a[i]>='A'&&a[i]<='Z')
    {
        a[i]=a[i]+32;
    }
    
}
for(int i =0;i<b.length();i++)
{
    if(b[i]>='A'&&b[i]<='Z')
    {
        b[i]=b[i]+32;
    }
}
int i =0;
    while(1)
    {
        if(a[i]=='\0'&&b[i]=='\0')
        {
            cout<<0<<endl;
            break;
        }
        else if(a[i]=='\0')
        {
            cout<<-1<<endl;
            break;
        }
        else if(b[i]=='\0')
        {
            cout<<1<<endl;
            break;
        }
        if(a[i]==b[i])
        {
            i++;
        }
        else if(a[i]<b[i])
        {
            cout<<-1<<endl;
            break;
        }
        else
        {
            cout<<1<<endl;
            break;
        }
    }
    return 0;
}