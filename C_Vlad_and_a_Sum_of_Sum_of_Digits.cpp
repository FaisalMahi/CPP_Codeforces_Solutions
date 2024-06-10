#include <iostream>
using namespace std;

int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        int total_sum = 0;
        for (int j = 1; j <= n; ++j) {
            total_sum += digitSum(j);
        }
        cout << total_sum << endl;
    }

    return 0;
}
