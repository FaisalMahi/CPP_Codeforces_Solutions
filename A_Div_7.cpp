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
        if (n % 7 == 0)
            cout << n << endl;
        else
        {
            {
                int find = (n / 10) % 10;
                int num1 = n - (n % 7);
                int num2 = n + 7 - (n % 7);
                int cmp = (num1 / 10) % 10;
                if (cmp == find)
                    cout << num1 << endl;
                else
                    cout << num2 << endl;
            }
        }
    }
    return 0;
}