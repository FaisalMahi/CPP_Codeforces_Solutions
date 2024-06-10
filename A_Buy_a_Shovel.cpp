#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k; cin>>n>>k;

        int find=n%10;
        for(int i =1;i<=10;i++)
        {
            int find2=find*i;
                if(find2%10==k||find2%10==0)
                {
                cout<<i<<endl;
                break;
                }
        }

    return 0;
}