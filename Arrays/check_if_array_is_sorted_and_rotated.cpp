// {3,4,5,1,2} -> Hers, arr increases from 3->4->5 and then 1->2, also, it continue with 3->4->->5 (rotated sort)
// {1,2,3,4,5} -> A fully sorted array satisfies the condition too.

#include <bits/stdc++.h>
using namespace std;

bool isSortedandRotated(int arr[], int size){
    int count=0;
    for(int i=1; i<size; i++){
        if(arr[i-1] > arr[i]){
            count++;
        }
    }

    // Rotate Condition
    if(arr[size-1] > arr[0]){
        count++;
    }

    // There will be two scenarios where previous element is greater than next, either in 3,4,(5,1),2 and 1,2,3,4,5,6 (6 -> 1).
    // All other scenarios are false cases
    return count<=1;
}

int main(){
    int arr[4] = {2,1,3,4};

    if(isSortedandRotated(arr, 5)){
        cout<<"Is Sorted and Rotated";
    }
    else{
        cout<<"Not Sorted and Rotated";
    }
}