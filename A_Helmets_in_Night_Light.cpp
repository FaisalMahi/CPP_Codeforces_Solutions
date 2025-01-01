#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int test;
    cin >> test;
    while (test--)
    {
        long long int n, p;
        cin >> n >> p;
        long long int ar1[n], ar2[n];
        for (int i = 0; i < n; i++)
            cin >> ar1[i];
        long long int ans = p;
        vector<pair<long long int,long long int>> vec;
        for (int i = 0; i < n; i++)
        {
            cin >> ar2[i];
            vec.push_back({min(p, ar2[i]), ar1[i]});
        }
        sort(vec.begin(), vec.end());
        long long int person = n - 1;
        for (int i = 0; i < n - 1; i++)
        {
            ans += min(vec[i].second, person) * vec[i].first;
            person -= min(person, vec[i].second);
        }
        cout << ans << endl;
    }
    return 0;
}