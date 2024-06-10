#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    b = a;
    for (int i = 0; i < n; ++i) {
        b.push_back(a[i]);
    }
    int cnt = 1;
    for (int i = 1; i < 2 * n; ++i) {
        if (b[i] >= b[i - 1]) cnt++;
        else cnt = 1;
        if (cnt == n) {
            cout << "Yes" << endl;
            return;
        }
    }
    cout << "No" << endl;
}

int main() {
    int test;
    cin >> test;
    while (test--) {
        solve();
    }
    return 0;
}
