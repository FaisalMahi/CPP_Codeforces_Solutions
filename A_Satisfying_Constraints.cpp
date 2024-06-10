/* #include<bits/stdc++.h>
using namespace std;
int main()
{    
    int test; cin>>test;
    while(test--)
    {
    int n,min=0,max=INT_MIN,sub=0; cin>>n;
    while(n--)
    {
        int a,x; cin>>a>>x;
        if(a==1&&x>=min) min=x;
        if(a==2&&x>=max) max=x;
        if(a==3)
        {
            if(x>=min&&x<=max) sub++;
        }
    }
    int ans =max-min+1-sub;
    if(ans<0) cout<<0<<endl;
    else cout<<ans<<endl;
    }
    return 0;
} */

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--){
    int n,myMin=0,myMax=INT_MAX;
    vector<int>v;
    cin>>n;
    while(n){
        int a,x;
        cin>>a>>x;
        if(a==1){
            myMin=max(myMin,x);
        }
        else if(a==2){
            myMax=min(myMax,x);
        }
        else if(a==3){
            v.push_back(x);
        }
        n--;
    }
    int ans = myMax-myMin+1;
    if(ans < 0){
        cout<<0<<endl;
    }
    else{
        for(auto elem:v){
            if(elem>=myMin && elem<=myMax){
                ans--;
            }
        }
        cout<<ans<<endl;
    }
    }
    return 0;
}
