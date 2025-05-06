#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, mn = INT_MAX, mx = INT_MIN;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            mx = max(mx, v[i]);
            mn = min(mn, v[i]);
        }
        if (mn == mx)
            cout << "No" << endl;
        else
        {
            cout << "Yes" << endl;
            for (int i = 0; i < n; i++)
            {
                if (v[i] == mx)
                    v[i] = 2;
                else
                    v[i] = 1;
            }
            for (int i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}