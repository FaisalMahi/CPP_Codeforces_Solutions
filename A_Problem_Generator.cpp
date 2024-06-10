#include<bits/stdc++.h>

# define int long long
# define to int t;cin>>t;while(t--)
# define no int n;cin>>n; // n
# define ar vector<int> arr(n);for(auto &it:arr){cin>>it;} //array
# define for1 for(int i=0 ;i<100 ; i++){if(i==90)break;}
# define for2 for(int i=0 ;i<100 ; i++){if(i==50)break;}
# define so string s;cin>>s;
# define str string 
# define mod 1e9+7
using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    to
    {
        no
        int m;cin>>m;
        string s;cin>>s;
        map<char,int> mp;
        for(auto i:s)
            mp[i]++;
        int ans = 0;
        vector<char> vec = {'A','B','C','D','E','F','G'};
        for(auto i:vec)
        {
            ans += (m-mp[i])<0 ?0:abs(m-mp[i]);
        }
        cout<<ans<<"\n";
    }
    return 0 ;
}