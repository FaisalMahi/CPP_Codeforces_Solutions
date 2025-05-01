#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int a, b, c, flag = 0;
        cin >> a >> b >> c;
        long long int sum = a + b + c;
        if (sum % 3 != 0)
            flag = 1;
        else
        {
            long long int cmp = sum / 3;
            if (cmp < b)
                flag = 1;
        }
        (flag == 1) ? cout << "NO" << endl : cout << "YES" << endl;
    }
    return 0;
}