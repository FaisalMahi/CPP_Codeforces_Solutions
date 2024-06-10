#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, ans = 0, f;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            if (a <= 10 && b >= ans)
            {
                ans = b;
            }
            if (ans == b)
            {
                f = i + 1;
            }
        }
        cout << f << endl;
    }
    return 0;
}