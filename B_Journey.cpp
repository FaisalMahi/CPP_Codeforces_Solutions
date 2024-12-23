#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long int n, a, b, c;
        cin >> n >> a >> b >> c;
        long long int sum = a + b + c;
        long long int cmp = n / sum;
        long long int ans = 0;
        if (cmp == 0)
        {
            if (n <= a)
                ans = 1;
            else if (n <= (a + b))
                ans = 2;
            else if (n <= (a + b + c))
                ans = 3;
        }
        else
        {
            long long int total_day = ((cmp) * 3);
            long long int baki = n - (cmp * sum);
            if (n % sum == 0)
                ans = total_day;
            else
            {
                if (baki <= a)
                    ans = total_day + 1;
                else if (baki <= (a + b))
                    ans = total_day + 2;
                else
                    ans = total_day + 3;
            }
        }
        cout << ans << endl;
    }
    return 0;
}