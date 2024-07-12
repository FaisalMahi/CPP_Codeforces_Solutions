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
        vector<int> ar(n), res;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        res.push_back(ar[0]);
        for (int i = 1; i < n; i++)
        {
            if (ar[i - 1] > ar[i])
            {
                res.push_back(ar[i]);
                res.push_back(ar[i]);
            }
            else
            {
                res.push_back(ar[i]);
            }
        }
        cout << res.size() << endl;
        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i] << " ";
        }
        cout << endl;
    }
    return 0;
}