#include <bits/stdc++.h>
using namespace std;


int findPivot(int arr[], int size){
	int start=0, end=size-1;
	int mid = start+(end-start)/2;
	
	while(start<=end){
		if(arr[mid] <arr[mid-1] && arr[mid]<arr[mid+1]){
            return mid;
		}
		
		else if(arr[mid] > arr[mid-1]){
			start=mid+1;
		}
		mid = start+(end-start)/2;
	}
    return -1;
}

int main(){
    // Pivot element is the one where, one sorted array ends and another starts.
    // So, the condition is that if the mid element is less than the previous and next element, it is pivot.
    // else, we increment start to mid-1.
    int arr[6] = {7,9,10,11,17, 2};
    cout << arr[findPivot(arr, 6)];
}