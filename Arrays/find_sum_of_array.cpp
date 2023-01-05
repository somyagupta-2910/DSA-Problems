#include <iostream>
using namespace std;

int sum_arr(int arr[], int size){
    int sum=0;
    for(int i=0; i<size; i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    int size;
    cin>>size;
    int arr[size];

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"Sum of array is "<<sum_arr(arr, size)<<endl;     
}