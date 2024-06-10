// https://codeforces.com/problemset/problem/1919/B 

 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
    int test; cin>>test;
    while(test--)
    {
    int n,plus=0,minus=0; cin>>n;
    string s; 
    cin>>s; 
    for(int i =0;i<s.length();i++)
    {
        if(s[i]=='+') plus++;
        else minus++;
    }
    int ans=plus-minus;
    if(ans>=0) cout<<ans<<endl;
    else cout<<ans*(-1)<<endl;
    }
    return 0;
 }