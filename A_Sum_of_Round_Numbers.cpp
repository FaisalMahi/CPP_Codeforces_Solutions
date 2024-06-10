#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n,count=0,find1=0,find2=0,find3=0,find4=0,find5=0;
        cin >> n;
        while (n > 0)
        {
            int find;
            find = n % 10;
            n = n / 10;
            if (find != 0)
            {
                count++;
               find1=find * 1 ;
            }

            find = n % 10;
            n = n / 10;
            if (find != 0)
            {
                count++;
                find2= find * 10;
            }
            find = n % 10;
            n = n / 10;
            if (find != 0)
            {
                count++;
                find3= find * 100;
            }
            find = n % 10;
            n = n / 10;
            if (find != 0)
            {
                count++;
               find4= find * 1000;
            }
                        find = n % 10;
            n = n / 10;
            if (find != 0)
            {
                count++;
                find5=find * 10000;
            }
        }
        cout<<count<<endl;
        if(find1!=0) cout<<find1<<" ";
        if(find2!=0) cout<<find2<<" ";
        if(find3!=0) cout<<find3<<" ";
        if(find4!=0) cout<<find4<<" ";
        if(find5!=0) cout<<find5<<" ";
        cout << endl;
    }
    return 0;
}