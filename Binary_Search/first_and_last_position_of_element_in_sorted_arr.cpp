#include <bits/stdc++.h>
using namespace std;

int lastOccurence(int arr[], int size, int key){
	int start=0, end=size-1, ans=-1;
	// TO avoid error if start and end are 2^31-1, if we go on to add start and end, it will come out of the range if int.
	int mid = start+(end-start)/2;
	
	while(start<=end){
		if(arr[mid] == key){
            ans=mid;
			start=mid+1; //We will search for last occurence in right hand side.
		}
		// Go to right part
		if (key > arr[mid]){
			start=mid+1;
		}
		// Go to left part
		else if(key < arr[mid]){
			end=mid-1;
		}
		mid = start+(end-start)/2;
	}
	return ans;
}

int firstOccurence(int arr[], int size, int key){
	int start=0, end=size-1, ans=-1;
	// TO avoid error if start and end are 2^31-1, if we go on to add start and end, it will come out of the range if int.
	int mid = start+(end-start)/2;
	
	while(start<=end){
		if(arr[mid] == key){
            ans=mid;
			end=mid-1; //We will search for more first occurence in left hand side.
		}
		// Go to right part
		if (key > arr[mid]){
			start=mid+1;
		}
		// Go to left part
		else if(key < arr[mid]){
			end=mid-1;
		}
		mid = start+(end-start)/2;
	}
	return ans;
}

int main(){
    int arr[5] = {1,2,3,3,5};
    cout << firstOccurence(arr, 5, 3)<<" "<<lastOccurence(arr, 5, 3);
}