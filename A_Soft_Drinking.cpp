#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_ml = k * l;
    int total_drinks = total_ml / nl;
    int total_limes = c * d;
    int total_salt = p / np;

    int ans = min({total_drinks, total_limes, total_salt}) / n;
    cout << ans << endl;

    return 0;
}
