#include <bits/stdc++.h>
using namespace std;

bool search_in_2d_array(vector<vector<int>> vec, int target){
    int row=vec.size();
    int col=vec[0].size();
    
    // Here, both rows and columns are sorted
    // We start from last element of first row.
    // If target element is greater, we go one row down, else we go one col. left.
    int rowindex=0;
    int colindex=col-1;
    
    
    while(rowindex<row && colindex>=0){
        if (target == vec[rowindex][colindex]){
            return true;
        }
        else if(target > vec[rowindex][colindex]){
            rowindex++;
        }
        else{
            colindex--;
        }
    }

    return false;
}

int main(){
    vector<vector<int>> vec = {{1, 4, 7, 11, 15}, {2,5,8,12, 19}, {3, 6, 9, 16, 22}, {10, 13, 14, 17, 24}};
    int target = 10;
    cout<<search_in_2d_array(vec, target); 
}