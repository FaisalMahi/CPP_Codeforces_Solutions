#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, maximum = 0;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        if (ar[i] >= maximum)
            maximum = ar[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << maximum - ar[i] << " ";
    }
    return 0;
}