#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 0, cons = 0;
        for (int i = 0; i < n; i++)
        {
            cons++;
            if (i == n - 1 || s[i] != s[i + 1])
            {
                ans = max(ans, cons);
                cons = 0;
            }
        }
        cout << ans + 1 << endl;
    }
    return 0;
}