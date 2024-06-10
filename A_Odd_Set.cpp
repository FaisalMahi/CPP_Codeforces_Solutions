#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, e = 0, o = 0;
        cin >> n;
        int m = 2 * n;
        int ar[m];
        for (int i = 0; i < m; i++)
        {
            cin >> ar[i];
            if (ar[i] % 2 == 0)
                e++;
            else
                o++;
        }
        if (e == o)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
