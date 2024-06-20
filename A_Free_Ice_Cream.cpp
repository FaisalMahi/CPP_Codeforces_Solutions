#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, sum, c = 0;
    cin >> n >> sum;
    for (int i = 0; i < n; i++)
    {
        string a;
        long long int b;
        cin >> a >> b;
        if (a == "+")
        {
            sum = sum + b;
        }
        else
        {
            if (b > sum)
            {
                sum = sum;
                c++;
            }
            else
            {
                sum = sum - b;
            }
        }
    }
    cout << sum << " " << c << endl;
    return 0;
}