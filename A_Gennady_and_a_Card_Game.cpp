#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, s1, s2, s3, s4, s5;
    cin >> s >> s1 >> s2 >> s3 >> s4 >> s5;
    int flag = 0;
    if (s[1] == s1[1] || s[1] == s2[1] || s[1] == s3[1] || s[1] == s4[1] || s[1] == s5[1])
        flag = 1;
    else if (s[0] == s1[0] || s[0] == s2[0] || s[0] == s3[0] || s[0] == s4[0] || s[0] == s5[0])
        flag = 1;
    if (flag == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}