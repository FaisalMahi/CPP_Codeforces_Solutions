//Question Link: https://codeforces.com/contest/2025/problem/A
// C++ Solution!
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        string cmp = (s1 < s2) ? s1 : s2;
        int cnt = 0;
        for (int i = 0; i < cmp.length(); i++)
        {
            if (s1[i] != s2[i])
            {
                break;
            }
            else
            {
                cnt++;
            }
        }
        int s1_len = (s1.length() - cnt);
        int s2_len = (s2.length() - cnt);
        if (cnt == 0)
        {
            cout << cnt + s1_len + s2_len << endl;
        }
        else
        {
            cout << cnt + s1_len + 1 + s2_len << endl;
        }
    }
    return 0;
}