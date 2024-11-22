#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int a_win = 0, b_win = 0, draw = 0;
    for (int i = 1; i <= 6; i++)
    {
        int cmp1 = abs(i - a);
        int cmp2 = abs(i - b);
        if (cmp1 < cmp2)
            a_win++;
        else if (cmp1 > cmp2)
            b_win++;

        else
            draw++;
    }
    // cout<<a_win;
    cout << a_win << " " << draw << " " << b_win << endl;
    return 0;
}