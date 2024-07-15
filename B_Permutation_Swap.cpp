#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, ans = 0;
        cin >> n;
        int ar[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> ar[i];
        }
        for (int i = 1; i <= n; i++)
        {
            ans = __gcd(ans, abs(ar[i] - i));
        }
        cout << ans << endl;
    }

    return 0;
}