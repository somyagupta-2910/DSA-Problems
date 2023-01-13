#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int start, int end){
    int greatercounter=0;
    for(int i=start+1; i<=end; i++){
        if(arr[start] > arr[i]){
            greatercounter++;
        }
    }
    int pivot = start+greatercounter;
    swap(arr[start], arr[pivot]);
    
    // 4 1 3 5 2
    // 2 1 3 5 4
    while(start<=end){
        if(arr[start] > arr[pivot] && arr[end] < arr[pivot]){
            swap(arr[start], arr[end]);
        }
        start++;
        end--;
    }

    return pivot;
}

void quick_sort(int arr[], int start, int end){
    // Base case
    if(start>=end){
        return;
    }
    
    //Partition (get pivot element)
    int pivot = partition(arr, start, end);
    // Recursive Relation

    //Partition Left-side array
    quick_sort(arr, start, pivot-1);
    //Partition right-side array
    quick_sort(arr, pivot+1, end);    
}

int main(){
    int arr[5] = {1,3,4,5,2};
    quick_sort(arr, 0, 4);
    for(int x:arr){
        cout<<x<<" ";
    }
}