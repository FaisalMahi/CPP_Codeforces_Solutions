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
        int cnt = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (ar[i] == ar[i + 1])
            {
                cnt++;
                i++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}