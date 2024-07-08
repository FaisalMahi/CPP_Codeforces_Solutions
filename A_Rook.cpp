#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string s;
        cin >> s;
        int n = int((s[1]) - '0');
        int n2 = n;
        while (n-- && n != 0)
        {
            cout << s[0] << n << endl;
        }
        for (int i = n2 + 1; i <= 8; i++)
        {
            cout << s[0] << i << endl;
        }
        int n3 = int(s[0] - 'a');
        int n4 = n3;
        while (n3 > 0)
        {
            cout << char(s[0] - n3) << s[1] << endl;
            n3--;
        }
        int k = 7 - n4;
        for (int i = 1; i <= k; i++)
        {
            cout << char(s[0] + i) << s[1] << endl;
        }
    }
    return 0;
}