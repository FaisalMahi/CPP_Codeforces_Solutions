#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int a,b; cin>>a>>b;
        if(a<=2) cout<<1<<endl;
        else
        {
            a=a-2;
            if(a<=b)
            {
                a=a+(b-a);
                cout<<(a/b)+1<<endl;
            }
            else if(a%b!=0)
            {
                a=a+(b-(a%b));
                cout<<(a/b)+1<<endl;
            }
            else
            {
                cout<<(a/b)+1<<endl;
            }
        }
    }
    return 0;
}