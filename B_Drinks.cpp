#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double cnt=0,avg;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        cnt=cnt+ar[i];
    }
    avg=cnt/n;
    printf("%.12f",avg);
    return 0;
}