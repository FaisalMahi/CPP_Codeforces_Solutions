#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int m, n, cnt = 0;
        cin >> m >> n;
        int ar[m];
        for (int i = 0; i < m; i++)
        {
            cin >> ar[i];
        }
        int front = 0, back = 0;
        for (int i = 0; i < m; i++)
        {
            if (ar[i] == 1)
            {
                front = i + 1;
                break;
            }
        }
        for (int i = m - 1; i >= 0; i--)
        {
            if (ar[i] == 1)
            {
                back = i + 1;
                break;
            }
        }
        int cmp = back - front;
        (cmp < n) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}