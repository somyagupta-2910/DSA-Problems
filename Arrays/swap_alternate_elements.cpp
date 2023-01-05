#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapAlterante(int arr[], int size){
    int counter_one=0, counter_two=1;
    while(counter_two<size){
        swap(arr[counter_one], arr[counter_two]);
        counter_one+=2;
        counter_two+=2;
    }
}

int main(){
    int arr[6] = {5, 7, -7, 32, 12, 98};
    int brr[5] = {27, 7, 98, 1, 12};

    swapAlterante(arr, 6);
    swapAlterante(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);
}