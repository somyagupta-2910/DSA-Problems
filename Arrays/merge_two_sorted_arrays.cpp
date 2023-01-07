#include <bits/stdc++.h>
using namespace std;

void merge2sortedarrays(int arr[], int n, int brr[], int m){
    int start_first_arr=0, start_second_arr=0, i=0;
    int res_arr[n+m];
    while(i < n+m){
        if(start_first_arr<n && start_second_arr<m){
            if(arr[start_first_arr] < brr[start_second_arr]){
                res_arr[i++]=arr[start_first_arr];
                start_first_arr++;
            }
            else{
                res_arr[i++]=brr[start_second_arr];
                start_second_arr++;
            }
        }
        else if(start_first_arr<n){
            res_arr[i++]=arr[start_first_arr];
            start_first_arr++;
        }
        else{
            res_arr[i++]=brr[start_second_arr];
            start_second_arr++;
        }
        
    }
    for(int i=0; i<n+m; i++){
        cout<<res_arr[i]<<" ";
    }
}

int main(){
    int arr[5] = {1,3,5,7,9};
    int brr[3] = {2,4,6};

    merge2sortedarrays(arr, 5, brr, 3);
}