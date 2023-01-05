#include <iostream>
using namespace std;

bool search_arr(int arr[], int size, int num){
    for(int i=0; i<size; i++){
        if(arr[i] == num){
            return true;
        }
    }
    return false;
}

int main(){
    int num;
    cin>>num;
    int arr[10] = {5, 7, -7, 32, 12, 98, 101, 42, 3, -10};
    int size=sizeof(arr)/sizeof(int);

    if (search_arr(arr, size, num) == true){
        cout<<"Element Present";
    }
    else{
        cout<<"Element not present";
    }  
}