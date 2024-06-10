#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int test; cin>>test;
    while(test--)
    {
    int n,count=0;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int minIndex = -1; 
    int maxIndex = -1; 
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            if (minIndex == -1) {
                minIndex = i;
            }
            maxIndex = i;
        }
    }
    for(int i=minIndex;i<=maxIndex;i++)
    {
        if(arr[i]==0) count++; 
    }
    cout<<count<<endl;
    }
    return 0;
}
