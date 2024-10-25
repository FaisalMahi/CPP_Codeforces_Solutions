//Question Link: https://codeforces.com/contest/2030/problem/A
//C++ Solution!
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
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        sort(ar, (ar + n));
        int sum1 = (ar[n - 1] * (n - 1));
        int sum2 = (ar[0] * (n - 1));
        int ans = sum1 - sum2;
        cout << ans << endl;
    }
    return 0;
}