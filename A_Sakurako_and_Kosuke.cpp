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
        if (n % 2 == 0)
            cout << "Sakurako" << endl;
        else
            cout << "Kosuke" << endl;
    }
    return 0;
}