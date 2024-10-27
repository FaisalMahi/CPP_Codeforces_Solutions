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
        if (a >= b)
            cout << a << endl;
        else
        {
            int cmp = b - a;
            a = a - cmp;
            b = b - (2 * cmp);
            if (a >= 0 && b >= 0)
            {
                if (a >= b)
                    cout << a << endl;
                else
                    cout << 0 << endl;
            }
            else
                cout << 0 << endl;
        }
    }
    return 0;
}