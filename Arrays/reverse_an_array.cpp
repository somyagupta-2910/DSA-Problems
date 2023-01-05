#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverse(int arr[], int size){
    int start=0, end=size-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[6] = {5, 7, -7, 32, 12, 98};
    int brr[5] = {27, 7, 98, 1, 12};

    reverse(arr, 6);
    reverse(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);
}