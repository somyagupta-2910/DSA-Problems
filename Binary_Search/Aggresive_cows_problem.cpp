// This questions is in the same lines of Book Allocation problem, but here we try to find the maximum distance (value) instead of minimum.
// Here, end value of search space will be maximum value in the array.

#include <bits/stdc++.h>
using namespace std;

bool isPossible(int arr[], int size, int num_cows, int mid){
    int last_pos=arr[0], cowsCount=1;

    for(int i=0; i<size; i++){
        if(arr[i] - last_pos >= mid){
            cowsCount++;
            if (cowsCount == num_cows){
                return true;
            }
            last_pos=arr[i];
        }
    }
    return false;
}

int aggressiveCows(int arr[], int size, int num_cows){
    int start=0, maxi=-1, ans=-1;

    for(int i=0; i<size; i++){
        maxi=max(maxi, arr[i]);
    }
    int end=maxi;
    int mid=start+(end-start)/2;

    while(start<=end){
        if(isPossible(arr, size, num_cows, mid)){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int main(){
    int size=4;
    int arr[size] = {5,5,5,5};
    int num_cows=2;

    cout << aggressiveCows(arr, size, num_cows);
}