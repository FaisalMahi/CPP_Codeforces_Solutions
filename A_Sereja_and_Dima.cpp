#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt1 = 0, cnt2 = 0;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar + n);
    // for (int i = n - 1; i >= 0; i -= 2)
    // {
    //     cnt1 = cnt1 + ar[i];
    // }
    // for (int i = n - 2; i >= 0; i -= 2)
    // {
    //     cnt2 = cnt2 + ar[i];
    // }
    // cout << cnt1 << " " << cnt2;
    for(int i =0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}