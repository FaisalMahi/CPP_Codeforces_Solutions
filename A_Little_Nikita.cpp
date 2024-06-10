#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int a, b;
        cin >> a >> b;
        if (a < b)
            cout << "No" << endl;
        else if (a == b)
            cout << "Yes" << endl;
        else
        {
            int cmp = b - a;
            if (cmp % 2 == 0)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
    return 0;
}