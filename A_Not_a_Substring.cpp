#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int left = 0, right = 0, flag = 0;
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
                right++;
            else
                left++;
        }
        if(s==")(")
        {
            cout<<"YES"<<endl;
            cout<<"(())"<<endl;
            continue;
        }
        if (right == left && s[0] == '(')
        {
            cout << "NO" << endl;
            continue;
        }
        else
        {
            int cnt = 0;
            for (int i = 0; i < s.length() - 1; i++)
            {
                if (s[i] != s[i + 1])
                {
                    cnt++;
                    // break;
                }
                if (cnt >= 2)
                {
                    flag = 1;
                    break;
                }
            }
            // cout << "YES" << endl;
            // cout<<"(";
            // for (int i = 0; i < s.length()-1; i++)
            // {
            //     cout << "()";
            // }
            // cout<<")";
            // cout << endl;
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
            // cout<<"(";
            for (int i = 0; i < s.length(); i++)
            {
                cout << "(";
            }
            for (int i = 0; i < s.length(); i++)
            {
                cout << ")";
            }
            // cout<<")";
            cout << endl;
        }
        else
        {
            cout << "YES" << endl;
            // cout << "(";
            for (int i = 0; i < s.length(); i++)
            {
                cout << "()";
            }
            // cout << ")";
            cout << endl;
        }
    }
    return 0;
}