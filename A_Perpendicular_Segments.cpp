#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int mn = min(a, b);
        cout << 0 << " " << 0 << " " << mn << " " << mn << endl;
        cout << 0 << " " << mn << " " << mn << " " << 0 << endl;
    }
    return 0;
}