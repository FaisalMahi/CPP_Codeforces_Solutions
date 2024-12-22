#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int seat_a, a, b, c, sum = 0, seat_b;
        cin >> seat_a >> a >> b >> c;
        seat_b = seat_a;
        if (a <= seat_a)
        {
            sum = sum + a;
            seat_a = seat_a - a;
        }
        else if (a > seat_a)
        {
            sum = sum + seat_a;
            seat_a = 0;
        }
        if (b <= seat_b)
        {
            sum = sum + b;
            seat_b = seat_b - b;
        }
        else if (b > seat_b)
        {
            sum = sum + seat_b;
            seat_b = 0;
        }
        int r_seat = seat_a + seat_b;
        if (r_seat >= c)
            sum = sum + c;
        else
            sum = sum + r_seat;
        cout << sum << endl;
    }
    return 0;
}