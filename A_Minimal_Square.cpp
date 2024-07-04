#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int a, b, mn, mx, ans;
        cin >> a >> b;
        mx = max(a, b);
        mn = min(a, b);
        ans = max(mn * 2, mx);
        cout << ans * ans << endl;
    }
    return 0;
}