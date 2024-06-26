#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long int n, cnt = 0;
        cin >> n;

        while (n > 1)
        {
            if (n % 2 == 0)
            {
                cnt++;
                n = n / 2;
            }
            else if (n % 3 == 0)
            {
                cnt++;
                n = (2 * n) / 3;
            }
            else if (n % 5 == 0)
            {
                cnt++;
                n = (4 * n) / 5;
            }
            else
            {
                cnt = -1;
                break;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}