#include <bits/stdc++.h>
using namespace std;

void rotate_array(vector<vector<int>> vec){
    int row=vec.size();
    int col=vec[0].size();
    
    // Transpose the matrix
    for(int i=0; i<row; i++){
        for(int j=0; j<i; j++){
            swap(vec[i][j], vec[j][i]);
        }
    }

    // reverse the matrix
    for(int i=0; i<row; i++){
        int start=0, end=col-1;
        while(start<=end){
            swap(vec[i][start], vec[i][end]);
            start++;
            end--;
        }
    }

    // print 2d vector
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    vector<vector<int>> vec = {{1, 4, 7, 11}, {2,5,8,12}, {3, 6, 9, 16}, {10, 13, 14, 17}};
    rotate_array(vec); 
}