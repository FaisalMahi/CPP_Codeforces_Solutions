#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, k;
        cin >> n >> k;
        int ar[k];
        for (int i = 0; i < k; i++)
        {
            cin >> ar[i];
        }
        sort(ar, (ar + k));
        int ans = 0;

        for (int i = 0; i < k - 1; i++)
        {

            ans = ans + (ar[i] - 1);
        }
        int update = ans + k;
        int m = ans + update - 1;
        cout << m << endl;
    }
    return 0;
}