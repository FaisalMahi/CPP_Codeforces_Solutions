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
        int ans = abs(a - b);
        if (ans % 10 == 0)
        {
            cout << ans / 10 << endl;
        }
        else
        {
            cout << (ans + 10) / 10 << endl;
        }
    }
    return 0;
}