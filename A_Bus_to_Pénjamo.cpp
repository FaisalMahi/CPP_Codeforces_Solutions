// Question Link: https://codeforces.com/contest/2022/problem/A
// C++ Solution!
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, r;
        cin >> n >> r;
        int ar[n];
        int cnt = 0, seat = n * 2, sum = 0, cnt_1 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            sum = sum + ar[i];
            if (ar[i] == 1)
                cnt_1++;
        }
        for (int i = 0; i < n; i++)
        {
            if (ar[i] % 2 == 0)
            {
                cnt = cnt + ar[i];
                r = r - (ar[i] / 2);
            }
            else if (ar[i] % 2 != 0 && ar[i] > 1)
            {
                cnt = cnt + (ar[i] - 1);
                r = r - ((ar[i] - 1) / 2);
            }
        }
        int rest = sum - cnt;
        int cmp = rest - cnt_1;

        if (rest <= r)
        {
            cnt = cnt + rest;
        }
        else
        {
            cnt = cnt + (r * 2 - rest);
        }
        cout << cnt << endl;
    }
    return 0;
}