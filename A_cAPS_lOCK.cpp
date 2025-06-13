<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int upper = 0, lower = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            lower++;
        else
            upper++;
    }
    if(lower==0)
    {
        for(int i=0;i<s.length();i++)
        {
            s[i]+=32;     
        }
        cout<<s<<endl;
    }
    else if ((s[0] >= 'a' && s[0] <= 'z') && lower != 1)
    {
        cout << s << endl;
    }
    else if((s[0] >= 'A' && s[0] <= 'Z')&& lower != 0)
    {
        cout<<s<<endl;
    }
    else
    {
        if (s[0] >= 'a' && s[0] <= 'z')
        {
            s[0] -= 32;
        }
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] += 32;
        }
        cout << s << endl;
    }
    return 0;
=======
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int upper = 0, lower = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            lower++;
        else
            upper++;
    }
    if(lower==0)
    {
        for(int i=0;i<s.length();i++)
        {
            s[i]+=32;     
        }
        cout<<s<<endl;
    }
    else if ((s[0] >= 'a' && s[0] <= 'z') && lower != 1)
    {
        cout << s << endl;
    }
    else if((s[0] >= 'A' && s[0] <= 'Z')&& lower != 0)
    {
        cout<<s<<endl;
    }
    else
    {
        if (s[0] >= 'a' && s[0] <= 'z')
        {
            s[0] -= 32;
        }
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] += 32;
        }
        cout << s << endl;
    }
    return 0;
>>>>>>> 0d2ea8ccf10040f9235c1a75653ad8a373326aa0
}