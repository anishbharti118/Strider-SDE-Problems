#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
    int r=matrix.size(), c = matrix[0].size();
    for (int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            if(matrix[i][j]==0){
                for(int k=0;k<r;++k)
                    if(matrix[k][j]!=0)
                        matrix[k][j]=-1;
                for(int l=0;l<c;++l)
                    if(matrix[i][l]!=0)
                        matrix[i][l]=-1;
            }
        }
    }
    
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            if(matrix[i][j]==-1)
                matrix[i][j]=0;
        }
    }
}