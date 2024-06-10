#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, max = 0, sum = 0;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        if (ar[i] >= max)
        {
            max = ar[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + (max - ar[i]);
    }
    cout << sum;
    return 0;
}