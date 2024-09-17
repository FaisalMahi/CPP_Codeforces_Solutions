#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int a, b;
        cin >> a >> b;
        if (a == 0 && b == 0)
            cout << "YES" << endl;
        else if (a % 2 != 0)
            cout << "NO" << endl;
        else if (a > 0)
            cout << "YES" << endl;
        else if(a==0)
        {
            if(b%2==0) cout<<"YES"<<endl;
            else cout << "NO" << endl;
        }
            
    }
    return 0;
}