#include <iostream>
#include <string>

using namespace std;

int max_k_as_subsequence(const string& a, const string& b) {
    int k = 0; 
    int j = 0; 

    // Iterate through the characters in a
    for (int i = 0; i < a.size(); i++) {
        // Search for the current character of a in b starting from the current position in b
        while (j < b.size() && b[j] != a[i]) {
            j++;
        }
        
        // If we find a match, increase k and move the pointer for b
        if (j < b.size() && b[j] == a[i]) {
            k++;
            j++;
        }
    }

    return k; // Return the length of the prefix in a that is a subsequence of b
}

int main() 
{
    int test; cin>>test;
    while(test--)
    {
    int n1,n2; cin>>n1>>n2;
    string a, b;
    cin >> a>>b;
    int max_k = max_k_as_subsequence(a, b);
    cout <<max_k << endl;
    }

    return 0;
}
