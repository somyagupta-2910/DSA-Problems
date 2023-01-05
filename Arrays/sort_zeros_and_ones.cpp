#include <bits/stdc++.h>
using namespace std;

// Here, we used two pointer method to sort
// The i element will track zeroes and j will track ones.
// If i element does not hacve zero and j element does not have one, we swap and increment and decrement i and j.
void sort_zeroes_and_ones(int arr[], int size){
    int i=0, j=size-1;
    while(i<j){
        if(arr[i] == 0){
            i++;
        }
        if(arr[j] == 1){
            j--;
        }
        if (arr[i] != 0 && arr[j] != 1){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
    int arr[8] = {1, 1, 0, 0, 0, 0, 1, 0};

    sort_zeroes_and_ones(arr, 8);
} 