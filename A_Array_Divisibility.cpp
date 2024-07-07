#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int ar[n];
        for (int i = 1; i <= n; i++)
        {
            ar[i] = 1;
        }
        for (int i = 1; i <= n; i++)
        {
            cout << ar[i] * i << " ";
        }
        cout<<endl;
    }
    return 0;
}