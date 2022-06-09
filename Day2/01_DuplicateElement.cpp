#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
    sort(arr.begin(), arr.end());
    int i;
    for(i=0;i<n-1;++i){
        if(arr[i]==arr[i+1])    break;
    }
    return arr[i];
}
