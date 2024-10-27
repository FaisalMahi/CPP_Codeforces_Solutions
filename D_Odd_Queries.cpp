#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long int n, k;
        cin >> n >> k;
        long long int ar[n];
        long long int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int ar1[k];
        for (int i = 0; i < k; i++)
        {
            int a, b, c;
            cin >> a >> b >> c;
            long long int sum = (b - a + 1) * c, sum2 = 0, sum3 = 0;
            for (int i = 0; i < a - 1; i++)
            {
                sum2 = sum2 + ar[i];
            }
            for (int i = b; i < n; i++)
            {
                sum3 = sum3 + ar[i];
            }
            long long int ans = sum + sum2 + sum3;
            if (ans % 2 == 0)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
    return 0;
}