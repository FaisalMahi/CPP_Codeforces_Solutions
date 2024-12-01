#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s; cin>>s;
    int n=s.size(),ans=n;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int num=((s[i]-'0')*10+(s[j]-'0'));
            
                if(num%25==0)
                {
                    ans=min(ans,((j-i-1)+(n-1-j)));
                }
            
        }
    }
    cout<<ans<<endl;
}
int main()
{
   int t; cin>>t;
   while(t--)
   {
    solve();
   } 
    return 0;
}