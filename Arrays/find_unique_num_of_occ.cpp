/*
I/P: 2 3 3 6 3 2
o/p: true
2 occurs 2 times
3 occurs 3 times
6 occurs 1 time.
Occurences are unique. Hence, it is true.
*/

#include <iostream>
using namespace std;

void uniqueelement(int arr[], int size){
    int ans=0;
    for(int i=0; i<size; i++){
        //XOR operation makes the same numbers as 0. Hence, we will get the unique singular element by multiplying across the elements of array
        ans^=arr[i];
    }
    cout<<ans;
}

int main(){
    int arr[5] = {5, 7, 7, 32, 5};

    uniqueelement(arr, 5);
}