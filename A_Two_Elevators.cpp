#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test; 
    while(test--)
    {
            int a,b,c; cin>>a>>b>>c;
    int cmp1,cmp2; 
    cmp1=a-1;
    if(b>c)
    {
        cmp2=(b-c)+(c-1);
    }
    else cmp2=(c-b)+(c-1);
    if(cmp1<cmp2) cout<<1<<endl;
    else if(cmp2<cmp1) cout<<2<<endl;
    else cout<<3<<endl;
    }
    return 0;
}