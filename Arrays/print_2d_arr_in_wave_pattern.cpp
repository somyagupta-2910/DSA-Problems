#include <bits/stdc++.h>
using namespace std;

void sum_arr(vector<vector<int>> vec, int row, int col){
    // If col index is even, we print top to bottm else we print bottom to top.
    for (int i=0; i<col; i++){
        if (i%2 == 0){
            for(int j=0; j<row; j++){
                cout<<vec[j][i]<<" ";
            }
        }
		else{
            for(int j=row-1; j>=0; j--){
                cout<<vec[j][i]<<" ";
            }
        }
	}
}

int main(){
    vector<vector<int>> vec = {{1, 2, 3}, {34, 45, 78}, {6,7,8}};
    sum_arr(vec, 3, 3); 
}