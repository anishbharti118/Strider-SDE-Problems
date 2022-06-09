#include <bits/stdc++.h> 

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
    int j=m-1, k=n-1;
    for(int i=m+n-1;i>=0;--i){
        if(arr1[j]>arr2[k]){
            arr1[i]=arr1[j];
            j--;
        }
        else{
            arr1[i]=arr2[k];
            k--;
        }
    }
    
    return arr1;
}