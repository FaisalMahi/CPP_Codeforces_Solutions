#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int a, b, sum = 0, cnt = 0;
        cin >> a >> b;
        for (int i = 0; i < a; i++)
        {
            string s;
            cin >> s;
            sum = sum + s.length();
            if (sum <= b)
            {
                cnt++;
            }
            else
                continue;
        }
        cout << cnt << endl;
    }
    return 0;
}