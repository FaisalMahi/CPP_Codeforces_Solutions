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
        int find = n % 3;
        if (find == 0)
        {
            cout << n / 3 << " " << n / 3 << endl;
        }
        else if (find == 2)
        {
            int ans = (n - find) / 3;
            cout << ans << " " << ans + 1 << endl;
        }
        else
        {
            int ans = (n - find) / 3;
            cout << ans + 1 << " " << ans << endl;
        }
    }
    return 0;
}