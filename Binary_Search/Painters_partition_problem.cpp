#include <bits/stdc++.h>
using namespace std;

bool isPossible(int arr[], int size, int num_painters, int mid){
    int paint_sum=0, paintersCount=1;

    for(int i=0; i<size; i++){
        if(paint_sum+arr[i] <= mid){
            paint_sum+=arr[i];
        }
        else{
            paintersCount++;
            if(paintersCount > num_painters || arr[i] > mid){
                return false;
            }
            paint_sum=arr[i];
        }
    }
    return true;
}

int alloactePainters(int arr[], int size, int num_painters){
    int start=0, sum=0, ans=-1;

    for(int i=0; i<size; i++){
        sum+=arr[i];
    }
    int end=sum;
    int mid=start+(end-start)/2;

    while(start<=end){
        if(isPossible(arr, size, num_painters, mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int main(){
    int size=4;
    int arr[size] = {5,5,5,5};
    int num_painters=2;

    cout << alloactePainters(arr, size, num_painters);
}