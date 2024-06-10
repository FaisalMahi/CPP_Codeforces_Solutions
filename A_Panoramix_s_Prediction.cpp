#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, flag = 0;
    cin >> a >> b;
    int ar[] = {1, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    for (int i = 0; i < 16; i++)
    {
        if (ar[i] == a && ar[i + 1] == b)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}