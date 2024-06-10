#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int x, y, count = 0;
        cin >> x >> y;
        if (y == 1 || y == 2)
            count = 1;
        else
            count = (y + 1) / 2;
        int empty = (count * 15) - (y * 4);

        if (x == 0 && y == 0)
            cout << 0 << endl;
        else if (y == 0)
        {
            cout << (x + 15 - 1) / 15 << endl;
        }
        else if (empty >= x)
        {
            cout << count << endl;
        }
        else
        {
            int ans = x - empty;

            int ans2 = (ans + 15 - 1) / 15;
            cout << count + ans2 << endl;
        }
    }
    return 0;
}