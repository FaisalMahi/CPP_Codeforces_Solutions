#include<bits/stdc++.h>
int main()
{
    int n,sum=0,div,mod;
    scanf("%d",&n);
    div = n/5;
    mod = n%5;
    sum = sum+div;
    div = mod/4;
    mod = mod%4;
    sum = sum+div;
    div = mod/3;
    mod = mod%3;
    sum = sum+div;
    div = mod/2;
    mod = mod%2;
    sum = sum+div;
    div = mod/1;
    mod = mod%1;
    sum = sum+div;
  
    printf("%d",sum);
    
    return 0;
}