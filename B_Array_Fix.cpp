#include<bits/stdc++.h>
using namespace std;

int main() {
    int test; 
    cin >> test; 
    while(test--) {
        int n, flag = 0; 
        cin >> n;
        int ar[n];
        for(int i = 0; i < n; i++) {
            cin >> ar[i];
        }
        for(int i = 0; i < n - 1; i++) {
            if(ar[i] % 10 < ar[i] / 10 && ar[i] % 10 != 0) {
                flag = 1;
                break;
            }
            else if(ar[i] % 10 > ar[i + 1] % 10 && ar[i + 1] % 10 != 0) {
                flag = 1;
                break;
            }
            else if(ar[i] % 10 > ar[i + 1] / 10 && ar[i + 1] / 10 != 0) {
                flag = 1;
                break;
            }
            else if(ar[i] / 10 > ar[i + 1] % 10 && ar[i + 1] % 10 != 0) {
                flag = 1;
                break;
            }
            else if(ar[i] / 10 > ar[i + 1] / 10 && ar[i + 1] / 10 != 0) {
                flag = 1;
                break;
            }
        }
        if(flag == 1) 
            cout << "NO" << endl;
        else 
            cout << "YES" << endl;
    }
    return 0;
}
