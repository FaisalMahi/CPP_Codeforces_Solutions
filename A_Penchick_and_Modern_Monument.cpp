#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        vector<int> ar(n);
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
        }

        int operations = 0;

        // Traverse from right to left to make the array non-decreasing
        for (int i = n - 2; i >= 0; i--) {
            if (ar[i] > ar[i + 1]) {
                operations += (ar[i] - ar[i + 1]);
                ar[i] = ar[i + 1];  // Reduce ar[i] to ar[i+1]
            }
        }

        cout << operations << endl;
    }
    return 0;
}
