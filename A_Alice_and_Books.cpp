#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n,m;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n-1; i++)
        {
            cin >> ar[i];
        }
        cin>>m;
        sort(ar, (ar + (n-1)));
        long long int ans = (m + ar[n - 2]);
        cout << ans << endl;
    }
    return 0;
}