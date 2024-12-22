/******************************
 *                            *
 *    Author :  Rion_Mahmud   *
 *    Created:  __.__.2023    *
 *                            *
 ******************************
 *******************************************************
 *                                                     *
 *  ***-->    BISMILLAHIR RAHMANIR RAHIM    <--***     *
 *  ***--> ISLAMIC UNIVERSITY OF BANGLADESH <--***     *
 *  ***--> COMPUTER SCIENCE AND ENGINEERING <--***     *
 *                                                     *
 *******************************************************/

#include<bits/stdc++.h>
const int mod=1000000007;
const int MX = 1e7+5;
#define  pf                 printf
#define  sc                 scanf
#define  endl               '\n'
#define  s1(n)              scanf("%d",&n)
#define  s2(n1,n2)          scanf("%d %d",&n1,&n2)
#define  s3(n1,n2,n3)       scanf("%d %d %d",&n1,&n2,&n3)
#define  s4(n1,n2,n3,n4)    scanf("%d %d %d %d",&n1,&n2,&n3,&n4)

#define  ss1(n)             scanf("%lld",&n)
#define  ss2(n1,n2)         scanf("%lld %lld",&n1,&n2)
#define  ss3(n1,n2,n3)      scanf("%lld %lld %lld",&n1,&n2,&n3)
#define  ss4(n1,n2,n3,n4)   scanf("%lld %lld %lld %lld",&n1,&n2,&n3,&n4)

#define  p1(x)              printf("%I64d",x)
#define  p2(x,y)            printf("%I64d %I64d",x,y)
#define  p3(x,y,z)          printf("%I64d %I64d %I64d",x,y,z)

#define  f0(i , a)          for(long long i=0; i<a;i++)
#define  f1(i , a)          for(long long i=1;i<=a;i++)

#define fastio {ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define  clr(x)             memset(x,0,sizeof(x))
#define  cln(x)             memset(x,-1,sizeof(x))
#define mk make_pair
#define pb push_back
#define all(x) x.begin(),x.end()
#define pi  acos(-1)
using namespace std;


/*//order_of_set  start.......

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>


//order_of_set end.....*/

#define int long long int


/*int LCM(int a,int b)
{
    return (a/(__gcd(a,b)))*b;
}*/


/*int X_OR(int n)
{
    if (n % 4 == 0) return n;
    if (n % 4 == 1) return 1;
    if (n % 4 == 2) return n + 1;
    return 0;
}*/

/*int digit_sum(int n)
{
    int sum=0;
    while(n>0) { sum+=(n%10); n=n/10; }
    return sum;
}*/

/*void one_count(int value){
    count binary bit one
 int p = 0;
 for (int bit = 0; bit < 62; bit ++) {
    if ((value>>bit)&1)
     {
     p ++;
     }
   }
   cout<<p-1<<endl;
}*/

/*
   xor propartiese
   a^b=x;
   x^b=a;
   a^x=b;
*/

/*priority_queue< int, vector<int>, greater<int> >q; */


signed main()
{
    fastio;
    int t;
    cin>>t;
    while(t--)
    {
       int n,q;
       cin>>n>>q;
       int ar[n+5],pre[n+5],suf[n+6];
       f1(i,n) cin>>ar[i];
       pre[0] = 0;
       pre[n+1] = 0;
       suf[0] = 0;
       suf[n+1] = 0;
       pre[1] = ar[1];

       for(int i=2; i<=n; i++)
       {
           pre[i] = ar[i]+pre[i-1];
       }
       suf[n] = ar[n];
       for(int i=n-1; i>=1; i--)
       {
        suf[i] = ar[i]+suf[i+1];
       }
       /*for(int i=1; i<=n; i++) cout<<pre[i]<<" ";
        cout<<endl;
       for(int i=1; i<=n; i++) cout<<suf[i]<<" ";*/
       int l,r,k;
       while(q--)
       {
            cin>>l>>r>>k;
            int sum = pre[l-1] + suf[r+1];
            int vl = r-l+1;
            sum += (vl*k);
            //cout<<sum<<endl;
            if(sum&1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
       }
    }
    /********  Alhamdulilha **********/
    return 0;
}