#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n)
{
  // Write your code here.
    vector<vector<long long int>> pascalTriangle(n);
    pascalTriangle[0].push_back(1);
    for(int i=1;i<n;++i){
        pascalTriangle[i].push_back(1);
        for(int j=1;j<i;++j){
            pascalTriangle[i].push_back(pascalTriangle[i-1][j]+pascalTriangle[i-1][j-1]);
        }
        pascalTriangle[i].push_back(1);
    }
    return pascalTriangle;
}
