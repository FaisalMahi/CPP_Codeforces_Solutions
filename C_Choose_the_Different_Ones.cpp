#include <iostream>
#include <set>
using namespace std;

int main()
{
    int test; cin>>test; 
    while(test--)
    {
    int a, b, k;
    cin >> a >> b >> k;
    
    int ar[a], ar1[b];
    
    for(int i = 0; i < a; i++) {
        cin >> ar[i];
    }
    
    for(int i = 0; i < b; i++) {
        cin >> ar1[i];
    }
        
    set<int> seen_a, seen_b;
    
    for(int i = 0; i < k; i++) {
        if(ar[i] <= k && !seen_a.count(ar[i])) {
            seen_a.insert(ar[i]);
        }
    }
    
    for(int i = 0; i < k; i++) {
        if(ar1[i] <= k && !seen_b.count(ar1[i])) {
            seen_b.insert(ar1[i]);
        }
    }
    int cmp=k/2;

    if(seen_a.size()>=cmp&&seen_b.size()>=cmp) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    }
    return 0;
}
