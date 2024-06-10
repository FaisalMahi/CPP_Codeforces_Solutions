#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> ar(n + 1); // Array for storing the values; note the size n + 1 to use 1-based indexing

    // Read the input array
    for (int i = 1; i <= n; i++) {
        cin >> ar[i];
    }

    // Initialize the flag
    int flag = 0;

    // Check each pair (i, j) where 1 <= i, j <= n
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // Check the condition: (i + ar[j] == j + ar[i])
            if (i + ar[j] == j + ar[i]) {
                // Calculate the absolute difference between ar[i] and j
                int cmp = abs(ar[i] - j);

                // Check if cmp is equal to any of ar[j], ar[i], i, or j
                if (cmp == ar[j] || cmp == ar[i] || cmp == i || cmp == j) {
                    // Set flag to 1 if the condition is met
                    flag = 1;
                }
            }
        }
    }

    // Output the value of flag (either 0 or 1)
    cout << flag << endl;

    return 0;
}
