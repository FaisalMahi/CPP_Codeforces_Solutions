// Question Link: https://codeforces.com/problemset/problem/2004/B
// C++ Solution!
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
        {
            cout << b - a << endl;
        }
        else if (a < c && b > d)
        {
            int cnt = 1;
            for (int i = c; i <= d; i++)
                cnt++;
            cout << cnt << endl;
        }
        else if (c < a && d > b)
        {
            int cnt = 1;
            for (int i = a; i <= b; i++)
                cnt++;
            cout << cnt << endl;
        }
        else if (a == d || b == c)
            cout << 2 << endl;
        else if (b < c)
            cout << 1 << endl;
        else if (a > d)
            cout << 1 << endl;
        else
        {
            int mx = max(a, c);
            int mn = min(b, d);
            int mn1 = min(mn, mx);
            int mx1 = max(mn, mx);
            int cnt = 0;
            for (int i = mn1; i <= mx1; i++)
            {
                cnt++;
            }
            if (a == c)
                cout << cnt << endl;
            else if (b == d)
                cout << cnt << endl;
            else
                cout << cnt + 1 << endl;
        }
    }
    return 0;
}