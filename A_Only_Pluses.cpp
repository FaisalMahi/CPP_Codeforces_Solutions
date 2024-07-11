#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int ar[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> ar[i];
        }
        sort(ar, (ar + 3));
        if (ar[1] - ar[0] >= 5)
        {
            ar[0] = ar[0] + 5;
        }
        else
        {
            int cmp = ar[1] - ar[0];
            ar[0] = ar[0] + cmp;
            int k = 5 - cmp;
            while (k > 0)
            {
                if (ar[0] < ar[2])
                {
                    ar[0]++;
                    k--;
                }
                if (ar[1] < ar[0]&&k>0)
                {
                    ar[1]++;
                    k--;
                }
                if (ar[1] < ar[2]&&k>0)
                {
                    ar[1]++;
                    k--;
                }
                if ((ar[0] == ar[2] && ar[1] == ar[2])&&k>0)
                {
                    ar[2]++;
                    k--;
                }
            }
        }
        int ans = ar[0] * ar[1] * ar[2];
        cout << ans << endl;
    }
    return 0;
}