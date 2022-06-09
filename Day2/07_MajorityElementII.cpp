#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int n = arr.size();
    map<int, int> mp;
    for(int i=0;i<n;++i)    mp[arr[i]]++;
    
    vector<int> ans;
    for(auto x:mp)
        if(x.second>n/3){
            ans.push_back(x.first);
        }
    return ans;

}