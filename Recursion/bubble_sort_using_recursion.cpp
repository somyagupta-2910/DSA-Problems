#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int size){
    // Base case
    if(size==0 || size==1){
        return;
    }

    for(int i=0; i<size-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }
    // Recursive Relation
    bubble_sort(arr, size-1);
}

int main(){
    int arr[5] = {1,21,3,25,5};
    bubble_sort(arr, 5);
    for(int x:arr){
        cout<<x<<" ";
    }
}