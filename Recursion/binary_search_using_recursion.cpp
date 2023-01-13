#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int k, int start, int end){
    // Base case
    if(start>end){
        return -1;
    }

    int mid=start + (end-start)/2;

    if(arr[mid]==k){
        return mid;
    }
    else if(k > arr[mid]){
        return binary_search(arr, k, mid+1, end);
    }
    else{
        return binary_search(arr, k, start, mid-1);
    }
    
}

int main(){
    int arr[5] = {1,2,3,11,17};
    int k=11;
    cout<<binary_search(arr, k, 0, 4);
}