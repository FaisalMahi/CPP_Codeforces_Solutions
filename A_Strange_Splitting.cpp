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
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        if (ar[0] == ar[n - 1])
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            if (ar[0] == ar[1])
            {
                cout << "B";
                for (int i = 1; i < n; i++)
                {
                    cout << "R";
                }
            }
            else
            {
                for (int i = 0; i < n - 1; i++)
                {
                    cout << "R";
                }
                cout << "B";
            }
            cout << endl;
        }
    }
    return 0;
}