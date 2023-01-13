#include <bits/stdc++.h>
using namespace std;

int sum_of_arr(int arr[], int size){
    // Base case
    if(size==0){
        return 0;
    }

    if(size==1){
        return arr[0];
    }

    // Recursive Relation
    return arr[0] + sum_of_arr(arr+1, size-1);
}

int main(){
    int arr[5] = {1,2,3,25,5};
    cout<<sum_of_arr(arr, 5);
}