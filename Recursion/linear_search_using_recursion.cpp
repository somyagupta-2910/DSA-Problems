#include <bits/stdc++.h>
using namespace std;

bool linear_search(int arr[], int size, int k){
    // Base case
    if(size==0){
        return false;
    }

    if(arr[0]==k){
        return true;
    }

    // Recursive Relation
    return linear_search(arr+1, size-1, k);
}

int main(){
    int arr[5] = {1,21,3,25,5};
    int k=213;
    cout<<linear_search(arr, 5, k);
}