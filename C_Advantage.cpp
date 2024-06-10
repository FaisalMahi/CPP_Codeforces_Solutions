#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, max1 = INT_MIN, cnt = 0;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if (ar[i] >= max1)
                max1 = ar[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (ar[i] == max1)
                cnt++;
        }
        int max2 = -1;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] >= max2 && ar[i] < max1)
            {
                max2 = ar[i];
            }
        }
        if (cnt >= 2)
            max2 = max1;
        else if (max2 == -1)
            max2 = max1;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] == max1)
            {
                ar[i] = ar[i] - max2;
            }
            else
            {
                ar[i] = ar[i] - max1;
            }
            cout << ar[i] << " ";
        }
        cout << endl;
    }
    return 0;
}