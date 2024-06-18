#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string ar[8];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> ar[i][j];
                if (ar[i][j] != '.')
                    cout << ar[i][j];
            }
        }

        cout << endl;
    }
    return 0;
}