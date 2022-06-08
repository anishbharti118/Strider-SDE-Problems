#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
    int c0=0, c1=0, c2=0;
    for(int i=0;i<n;++i){
        switch(arr[i]){
            case 0: c0++;
                break;
            case 1: c1++;
                break;
            case 2: c2++;
                break;
            default: break;
        }
    }
    int i;
    for(i=0;i<c0;++i)    arr[i]=0;
    for(;i<c0+c1;++i)    arr[i]=1;
    for(;i<n;++i)    arr[i]=2;
    
}