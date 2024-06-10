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
        int ar[n], ar1[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        for (int i = 0; i < n; i++)
        {
            ar1[i] = ar[i];
        }
        sort(ar, (ar + n));
        int find;
        if (ar[0] == ar[1] || ar[0] == ar[2])
        {
            find = ar[n - 1];
        }
        else
            find = ar[0];
        for (int i = 0; i < n; i++)
        {
            if (ar1[i] == find)
                cout << i + 1 << endl;
        }
    }
    return 0;
}