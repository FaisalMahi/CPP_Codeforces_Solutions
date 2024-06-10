#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int n;
    cin >> n;

    // Maps to keep track of the frequency of home and away uniform colors
    unordered_map<int, int> home_freq, away_freq;

    // Arrays to store input data
    int home[n], away[n];

    // Read the input and update the frequency maps
    for (int i = 0; i < n; i++) {
        cin >> home[i] >> away[i];
        home_freq[home[i]]++; // Increase the frequency of home colors
        away_freq[away[i]]++; // Increase the frequency of away colors
    }

    // Process each team
    for (int i = 0; i < n; i++) {
        int home_color = home[i];
        int away_color = away[i];

        // Calculate the number of games where the home uniform color of team i matches the away color of other teams
        int cnt_home = n - 1 + home_freq[home_color];

        // Calculate the number of games where the away uniform color of team i matches the home color of other teams
        int cnt_away = n - 1 + away_freq[away_color];

        // Print the results
        cout << cnt_home << " " << cnt_away << endl;
    }

    return 0;
}
