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

int binarySearch(int arr[], int size, int start, int end, int key){
    int mid=start + (end-start)/2;
    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }
        if (key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return 0;
}

int main(){
    // Pivot element is the one where, one sorted array ends and another starts.
    // Based on the pivot element, we will know, whether the number is in sorted range 1 or sorted range 2.
    int size=5;
    int arr[size] = {7,9,1,2,3};
    int key=2;
    int pivotindex=findPivot(arr, size);
    int start, end;

    if(key >= arr[pivotindex] & key<=arr[size-1]){
        start=pivotindex;
        end=size-1;
    }
    else{
        start=0;
        end=pivotindex-1;
    }

    cout<<binarySearch(arr, size, start, end, key);
}