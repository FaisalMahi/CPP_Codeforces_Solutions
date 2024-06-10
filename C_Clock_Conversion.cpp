#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
    string s; cin>>s;
    if(s[0]=='1'&&s[1]=='2')
    {
        cout<<s<<" PM"<<endl;
    }
    else if(s[0]=='1'&&s[1]=='3')
    {
        s[0]='0';
        s[1]='1';
        cout<<s<<" PM"<<endl;
    }
    else if(s[0]=='1'&&s[1]=='4')
    {
        s[0]='0';
        s[1]='2';
        cout<<s<<" PM"<<endl;
    }
    else if(s[0]=='1'&&s[1]=='5')
    {
        s[0]='0';
        s[1]='3';
        cout<<s<<" PM"<<endl;
    }
    else if(s[0]=='1'&&s[1]=='6')
    {
        s[0]='0';
        s[1]='4';
        cout<<s<<" PM"<<endl;
    }
    else if(s[0]=='1'&&s[1]=='7')
    {
        s[0]='0';
        s[1]='5';
        cout<<s<<" PM"<<endl;
    }
    else if(s[0]=='1'&&s[1]=='8')
    {
        s[0]='0';
        s[1]='6';
        cout<<s<<" PM"<<endl;
    }
    else if(s[0]=='1'&&s[1]=='9')
    {
        s[0]='0';
        s[1]='7';
        cout<<s<<" PM"<<endl;
    }
    else if(s[0]=='2'&&s[1]=='0')
    {
        s[0]='0';
        s[1]='8';
        cout<<s<<" PM"<<endl;
    }
    else if(s[0]=='2'&&s[1]=='1')
    {
        s[0]='0';
        s[1]='9';
        cout<<s<<" PM"<<endl;
    }
    else if(s[0]=='2'&&s[1]=='2')
    {
        s[0]='1';
        s[1]='0';
        cout<<s<<" PM"<<endl;
    }
    else if(s[0]=='2'&&s[1]=='3')
    {
        s[0]='1';
        s[1]='1';
        cout<<s<<" PM"<<endl;
    }
    else if(s[0]=='0'&&s[1]=='0')
    {
        s[0]='1';
        s[1]='2';
        cout<<s<<" AM"<<endl;
    }
    else
    {
        cout<<s<<" AM"<<endl;
    }
    }    
    return 0;
}