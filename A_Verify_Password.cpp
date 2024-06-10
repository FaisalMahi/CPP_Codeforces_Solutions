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
        string s1, s2;
        cin >> s1;
        s2 = s1;
        sort(s1.begin(), s1.end());
        if (s1 == s2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}