#include<bits/stdc++.h>
using namespace std;

bool isBeautifulArray(const vector<int>& a) {
    int n = a.size();
    if (n < 3) return false; 
    vector<int> sorted_a = a;
    sort(sorted_a.begin(), sorted_a.end());

   
    int smallest = sorted_a[0];
    int second_smallest = -1;
    for (int i = 1; i < n; ++i) {
        if (sorted_a[i] != smallest) {
            second_smallest = sorted_a[i];
            break;
        }
    }

    if (second_smallest == -1) return false;

    
    for (int x : sorted_a) {
        if (x % smallest != 0 && x % second_smallest != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        if (isBeautifulArray(a)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
