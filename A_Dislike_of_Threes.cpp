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
        for (int i = 0;; i++)
        {
            if (i % 3 == 0 || i % 10 == 3)
            {
                continue;
            }
            else
            {
                n--;
                if (n == 0)
                {
                    cout << i << endl;
                    break;
                }
                
            }
        }
    }
    return 0;
}