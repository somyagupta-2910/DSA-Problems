#include <bits/stdc++.h>
using namespace std;

void sum_arr(int arr[][3], int row, int col){
    int sum=0, maxi=INT_MIN, max_sum_index=0;
    vector <int> vec;
    for (int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			sum+=arr[i][j];
		}
        if(sum>maxi){
            maxi=sum;
            max_sum_index=i;
        }
        sum=0;
	}
    cout<<"The max. sum row sum is index "<<max_sum_index;
}

int main(){
    int arr [3][3] = {{1, 2, 3}, {34, 45, 78}, {6,7,8}};
    sum_arr(arr, 3, 3); 
}