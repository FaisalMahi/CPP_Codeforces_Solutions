#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n1, n2;
        cin >> n1 >> n2;
        string s1, s2;
        cin >> s1 >> s2;
        int result = 0, test = 6, flag = 0;
        while (test--)
        {
            if (s1.find(s2) != string ::npos)
            {
                flag = 1;
                break;
            }
            result++;
            s1 += s1;
        }
        if (flag == 1)
            cout << result << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}