#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    cin.ignore();
    while (test--)
    {
        string s;
        getline(cin, s);
        cout << s[0];
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
                cout << s[i + 1];
        }
        cout << endl;
    }
    return 0;
}