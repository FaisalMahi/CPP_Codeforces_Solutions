#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b;
        cin >> a >> b;
        long long int ans=max(a,b);
        cout << ans + 1 << endl;
    }
    return 0;
}