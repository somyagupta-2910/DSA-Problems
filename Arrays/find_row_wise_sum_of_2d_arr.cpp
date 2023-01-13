#include <bits/stdc++.h>
using namespace std;

void sum_arr(int arr[][3], int row, int col){
    int sum=0;
    vector <int> vec;
    for (int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			sum+=arr[i][j];
		}
        vec.push_back(sum);
        sum=0;
	}
    for(int x:vec){
        cout<<x<<" ";
    }
}

int main(){
    int arr [3][3] = {{1, 2, 3}, {34, 45, 78}, {6,7,8}};
    sum_arr(arr, 3, 3); 
}