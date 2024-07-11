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
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if (ar[i] == 1)
                ar[i]++;
        }
        for (int i =1; i <=n-1; i++)
        {
            if (ar[i] % ar[i - 1] == 0)
                ar[i]++;
        }
        for(int i=0;i<n;i++)
        {
            cout<<ar[i]<<" ";
        }
        cout << endl;
    }
    return 0;
}