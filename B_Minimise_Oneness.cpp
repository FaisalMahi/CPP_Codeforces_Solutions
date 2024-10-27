//Question Link: https://codeforces.com/contest/2030/problem/B
//C++ Solution!
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
            if (i == 0)
                cout << "1";
            else
                cout << "0";
        }
        cout << endl;
    }
    return 0;
}