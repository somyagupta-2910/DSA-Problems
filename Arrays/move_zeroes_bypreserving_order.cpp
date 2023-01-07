// I/p: {2,0,1,3,0,0,0};
//O/P: 2 1 3 0 0 0 0 

#include <bits/stdc++.h>
using namespace std;

void moveZeroes(int arr[], int size){
    //Apply Bubble Sort Logic to move zeroes to the right
    // for(int i=1; i<=size-1; i++){
    //     bool isSwapped=false;
    //     for(int j=0; j<size-i; j++){
    //         if(arr[j] == 0){
    //             swap(arr[j], arr[j+1]);
    //             isSwapped=true;
    //         }
    //     }
    //     if(isSwapped == false){
    //         break;
    //     }
    // }

    // Optimized Solution: Here, we have two trackers, we swap when we encounter non-zero value
    int i=0;
    for(int j=0; j<size; j++){
        if(arr[j] != 0){
            swap(arr[j], arr[i]);
            i++;
        }
    }


    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[7] = {2,0,1,3,0,0,0};

    moveZeroes(arr, 7);
}