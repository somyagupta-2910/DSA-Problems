// Here, we shift elements to the right by the number of places mentioned.
// We use the lgoic of mod, if we have to shift the 3rd index by 3, we do 3%3 which is zero. Hence, we have to place it at 0th index.

#include <bits/stdc++.h>
using namespace std;

void rotate(int arr[], int size, int shiftBy){
    int ans_arr[size];
    for(int i=0; i<size; i++){
        ans_arr[(i+shiftBy)%size] = arr[i];
    }


    for(int i=0; i<size; i++){
        cout<<ans_arr[i]<<" ";
    }
}

int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int shiftBy=3;

    rotate(arr, 7, shiftBy);
}