#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	long long int sum = n * (n+1)/2;
    long long int ssum = n * (n+1) * (2*n+1)/6;
    long long int m=0, r=0;
    for(int i=0;i<n;++i){
        sum -= (long long int)arr[i];
        ssum -= (long long int)arr[i] * (long long int)arr[i];
    }
    m = (sum + (ssum/sum))/2;
    r = m - sum;
    
    pair<int, int> ans;
    ans.first = m;
    ans.second = r;
    return ans;
}
