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
        reverse(s.begin(), s.end());
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'p')
                s[i] = 'q';
            else if (s[i] == 'q')
                s[i] = 'p';
        }
        cout << s << endl;
    }
    return 0;
}