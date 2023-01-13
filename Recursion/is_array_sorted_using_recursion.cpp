#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int size){
    // Base case
    if(size==0 || size==1){
        return true;
    }
    
    if(arr[0] > arr[1]){
        return false;
    }
    else{
        return isSorted(arr+1, size-1);
    }
}

int main(){
    int arr[5] = {2,3,7, 22, 21};
    cout<<isSorted(arr, 5);
}