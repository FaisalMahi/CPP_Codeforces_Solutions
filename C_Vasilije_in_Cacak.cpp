#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long int n, k, x, minimum, dif, maximum;
        cin >> n >> k >> x;
        minimum = (k * (k + 1)) / 2;
        dif = n - k;
        maximum = (((n * (n + 1)) / 2) - ((dif * (dif + 1)) / 2));
        if (x < minimum || x > maximum)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}