#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, police = 0, crime = 0;
    cin >> n;
    int ar[n];
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
        if (ar[i] > 0) {
            police=police+ar[i];
        } else {
            if (police == 0) {
                crime++;
            } else {
                police--;
            }
        }
    }
    cout << crime;
    return 0;
}
