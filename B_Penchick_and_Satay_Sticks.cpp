#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;  // Read number of test cases
    while (test--) {
        int n;
        cin >> n;  // Read the size of the permutation
        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];  // Read the permutation
        }

        bool possible = true;

        // Simulate the process of sorting using the allowed swaps
        bool swapped = true;
        while (swapped) {
            swapped = false;
            // Loop through the array and swap adjacent elements that differ by 1
            for (int i = 0; i < n - 1; i++) {
                if (abs(p[i] - p[i + 1]) == 1) {
                    swap(p[i], p[i + 1]);
                    swapped = true;
                }
            }
        }

        // Check if the array is sorted
        for (int i = 0; i < n - 1; i++) {
            if (p[i] > p[i + 1]) {
                possible = false;
                break;
            }
        }

        // Output the result
        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
