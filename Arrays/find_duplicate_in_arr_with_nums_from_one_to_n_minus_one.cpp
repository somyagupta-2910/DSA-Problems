/*
I/P: 1 3 4 2 3
o/p: 3

*/

#include <iostream>
using namespace std;

void uniqueelement(int arr[], int size){
    int xor_sum=0, ans=0;
    for(int j=1; j<=size-1; j++){
        xor_sum^=j;
    }
    for(int i=0; i<size; i++){
        //XOR operation makes the same numbers as 0. Hence, we will get the unique singular element by multiplying across the elements of array
        ans^=arr[i];
    }
    
    cout<< (ans-xor_sum);
}

int main(){
    int arr[6] = {1, 3, 4, 2, 2, 5};

    uniqueelement(arr, 6);
}