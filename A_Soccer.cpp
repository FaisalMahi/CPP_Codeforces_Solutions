#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a == c && b == d)
            cout << "YES" << endl;
        else if (b >= a && d <= c)
            cout << "NO" << endl;
        else if (a >= b && c <= d)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}