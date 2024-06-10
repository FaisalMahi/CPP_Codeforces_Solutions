// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n; cin>>n;
//     while(n--)
//     {
//     string s; cin>>s;
//     if(s=="cab"||s=="bca") cout<<"NO"<<endl;
//     else cout<<"YES"<<endl;
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
        string s; cin>>s;
            if(s[0]=='a'||s[1]=='b'||s[2]=='c') cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
    }
    return 0;
}