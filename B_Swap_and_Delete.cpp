#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string s;
        cin >> s;
        int cnt_0 = 0, cnt_1 = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
                cnt_0++;
            else
                cnt_1++;
        }
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='1')
            {
                if(cnt_0>0) cnt_0--;
                else 
                break;
            }
            else
            {
                if(cnt_1>0) cnt_1--;
                else 
                break;
            }
        }
        cout<<cnt_0+cnt_1<<endl;
    }
    return 0;
}