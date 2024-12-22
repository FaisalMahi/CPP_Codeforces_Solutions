#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int s, b;
        cin >> s >> b;
        int p, c[b];
        int sum_c = 0;
        for (int i = 0; i < b; i++)
        {
            cin >> p >> c[i];
            sum_c = sum_c + c[i];
        }

        if (s >= b)
        {
            cout << sum_c << endl;
        }
        else
        {
            sort(c, c + b, greater<int>());
            int sum = 0;
            for (int i = 0; i < s; i++)
            {
                sum = sum + c[i];
            }
            cout << sum << endl;
        }
    }
    return 0;
}