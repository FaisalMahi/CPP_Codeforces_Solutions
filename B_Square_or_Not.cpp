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
        string s;
        cin >> s;
        int cnt = 0;
        if (sqrt(n) * sqrt(n) != n)
            cout << "No" << endl;
        else
        {
            for (int i = 0; i < s.length(); i++)
            {
                if (s[i] == '0')
                {
                    cnt++;
                }
            }
            if (sqrt(n) - 2 == sqrt(cnt))
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
    return 0;
}