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
        int max_a = 0, max_b = 0;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            max_a = max(a, max_a);
            max_b = max(b, max_b);
        }
        cout << (max_a * 2) + (max_b * 2) << endl;
    }
    return 0;
}