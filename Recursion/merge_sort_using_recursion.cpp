#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int start, int end){
    int mid=start+(end-start)/2;

    // length of two arrays
    int arr_first_len= mid-start+1;
    int arr_second_len= end-mid;

    // create two new arrays that will be then merged
    int *first_arr = new int[arr_first_len];
    int *second_arr = new int[arr_second_len];

    // copy values
    int main_arr_index=start; // This will iterate through the big original array
    for(int i=0; i<arr_first_len; i++){
        first_arr[i] = arr[main_arr_index++];
    }

    main_arr_index=mid+1;
    for(int i=0; i<arr_second_len; i++){
        second_arr[i] = arr[main_arr_index++];
    }

    //merge the two sorted arrays
    int index1=0, index2=0;
    main_arr_index=start;

    while(index1 < arr_first_len && index2 < arr_second_len){
        if(first_arr[index1] <= second_arr[index2]){
            arr[main_arr_index]=first_arr[index1];
            index1++;
            main_arr_index++;
        }
        else{
            arr[main_arr_index]=second_arr[index2];
            index2++;
            main_arr_index++;
        }
    }
    while(index1 < arr_first_len){
        arr[main_arr_index]=first_arr[index1];
        index1++;
        main_arr_index++;
    }
    while(index2 < arr_second_len){
        arr[main_arr_index]=second_arr[index2];
        index2++;
        main_arr_index++;
    }

    delete []first_arr;
    delete []second_arr;
}

void merge_sort(int arr[], int start, int end){
    // Base case
    if(start>=end){
        return;
    }

    int mid=start+(end-start)/2;
    
    // Recursive Relation

    //Sort Left-side array
    merge_sort(arr, start, mid);
    //Sort right-side array
    merge_sort(arr, mid+1, end);
    //merge
    merge(arr, start, end);
}

int main(){
    int arr[5] = {1,21,3,25,5};
    merge_sort(arr, 0, 4);
    for(int x:arr){
        cout<<x<<" ";
    }
}