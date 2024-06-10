#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int w, h, n;
        cin >> w >> h >> n;
        long long int area = w * h;
        int piece = 1;
        while (w % 2 == 0)
        {
            w = w / 2;
            piece *= 2;
        }
        while (h % 2 == 0)
        {
            h = h / 2;
            piece *= 2;
        }
        if (piece >= n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}