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
        int ar1[n], ar2[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> ar2[i];
        }
        long long int sum_a = 0, sum_b = 0;
        for (int i = 0; i < n-1; i++)
        {
            if (ar1[i] > ar2[i + 1])
                sum_a = sum_a + ar1[i];
        }
        sum_a = sum_a + ar1[n - 1];
        for (int i = 0; i < n - 1; i++)
        {
            if (ar1[i] > ar2[i + 1])
            {
                sum_b = sum_b + ar2[i + 1];
            }
        }
        long long int ans = abs(sum_a - sum_b);
        cout << ans << endl;
    }
    return 0;
}