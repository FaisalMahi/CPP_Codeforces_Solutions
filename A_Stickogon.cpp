#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, count = 0;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int cnt[101] = {0};
        for (int i = 0; i < n; i++)
        {
            cnt[ar[i]]++;
        }
        for (int i = 0; i <= 100; i++)
        {
            if (cnt[i] >= 3)
            {
                count = count + (cnt[i] / 3);
            }
        }
        cout << count << endl;
    }
    return 0;
}