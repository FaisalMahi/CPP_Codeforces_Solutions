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
        int zero = 0, one = 0;
        int ar[2 * n];
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> ar[i];
            if (ar[i] == 0)
                zero++;
            else
                one++;
        }
        if (n == 1)
        {
            if (one == 0 || one == 2)
                cout << 0 << " " << 0 << endl;
            else
                cout << 1 << " " << 1 << endl;
                continue;
        }

            int mn = max(zero, one)%2;
            int mx = min(zero, one);
            cout << mn << " " << mx << endl;
        
    }
    return 0;
}