#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int a, b, total;
        cin >> a >> b;
        total = a * 60 + b;
        cout << 1440 - total << endl;
    }
    return 0;
}
