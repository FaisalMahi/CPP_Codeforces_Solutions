#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, cmp = INT_MAX;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (ar[i] >= ar[i + 1])
            {
                int cmp2 = (ar[i] - 1);
                if (cmp2 <= cmp)
                    cmp = cmp2;
            }
            else if (ar[i] < ar[i + 1])
            {
                int cmp2 = (ar[i + 1] - 1);
                if (cmp2 <= cmp)
                    cmp = cmp2;
            }
        }
        cout << cmp << endl;
    }
    return 0;
}