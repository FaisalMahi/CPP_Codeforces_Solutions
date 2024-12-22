#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long int n, cmp;
        cin >> n >> cmp;
        int ar[n];
        for (long long int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        sort(ar, (ar + n), greater<int>());
        long long int sum = 0, ans = 0;

        for (int i = 0; i < n; i++)
        {
            sum = sum + ar[i];
            // cout<<sum<<endl;
            if (sum == cmp)
            {
                ans = 0;
                break;
            }
            else if (sum > cmp)
            {
                ans = abs(cmp - (sum - ar[i]));
            }
            else if (sum < cmp)
            {
                ans = cmp - sum;
            }
        }
        cout << ans << endl;
    }

    return 0;
}