#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, k;
        cin >> n >> k;
        int ans = k, even = 0;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if (ar[i] % 2 == 0)
                even++;
            if (ar[i] % k == 0)
                ans = 0;
            ans = min(ans, k - (ar[i] % k));
        }
        if (k == 4)
        {
            if (even >= 2)
                ans = 0;
            else if (even == 1)
                ans = min(ans, 1);
            else
                ans = min(ans, 2);
        }
        cout << ans << endl;
    }
    return 0;
}