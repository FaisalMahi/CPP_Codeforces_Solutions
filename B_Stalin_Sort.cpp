#include <bits/stdc++.h>
using namespace std;

// Function to find the length of the Longest Non-Increasing Subsequence (LNIS)
int longestNonIncreasingSubsequence(vector<int>& arr) {
    vector<int> lnis;

    for (int num : arr) {
        // Use upper_bound in reverse order to maintain non-increasing order
        auto it = upper_bound(lnis.begin(), lnis.end(), num, greater<int>());
        if (it == lnis.end()) {
            lnis.push_back(num);  // Add num to the LNIS
        } else {
            *it = num;  // Replace with a smaller or equal value
        }
    }

    return lnis.size();  // Return the length of LNIS
}

int main() {
    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        int n;
        cin >> n;  // Size of the array
        vector<int> arr(n);

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];  // Input elements
        }

        // Find the length of the LNIS
        int len = longestNonIncreasingSubsequence(arr);

        // Minimum number of elements to remove
        cout << n - len << endl;
    }

    return 0;
}
