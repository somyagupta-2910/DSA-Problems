#include <bits/stdc++.h>
using namespace std;

int peakIndex(int arr[], int size){
	int start=0, end=size-1, ans=-1;
	// TO avoid error if start and end are 2^31-1, if we go on to add start and end, it will come out of the range if int.
	int mid = start+(end-start)/2;
	
	while(start<end){
		if(arr[mid] < arr[mid+1]){
            start++;
		}
		// Go to right part
		else{
            end=mid;// We do this instead of end=mid-1, so that we do not cross the mid element which could have been the peak.
        }
		mid = start+(end-start)/2;
	}
	return start;
}

int main(){
    int arr[5] = {1,2,3,4,1};
    cout << peakIndex(arr, 5);
}