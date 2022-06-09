#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int x) {
    // Write your code here.
    int i, j;
    for(i=1;i<m;++i){
        if(x<mat[i][0]){
            break;
        }
    }
    i--;
    for(j=0;j<n;++j){
        if(x==mat[i][j]){
            return true;
        }
    }
    return false;
}