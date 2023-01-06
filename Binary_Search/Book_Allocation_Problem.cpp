// URL: https://www.codingninjas.com/codestudio/problems/ayush-and-ninja-test_1097574?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2

// We apply the logic of finding square root using binary search, wherein we define a search space.
// The min. number of pages assigned to a student will be 0. and the max. pages will be sum of all pages.
// Now we start applying binary search on this range. If the number of students required to satisfy the mid value is greater than the given number of students, we need to come to the right part of the search space (start = mid+1)
// Else, we go to the left part by doing end=mid-1. We keep doing this till we find the min. value of pages.


#include <bits/stdc++.h>
using namespace std;

// This function tells us if with this mid value we can allocate all pages to all students
bool isPossible(int arr[], int n, int m, int mid){
    int student_count=1;
    int page_sum=0;

    for(int i=0; i<n; i++){
        // This cond. checks if the current student's total number of pages is less than mid, if yes continue adding the pages.
        if(page_sum+arr[i] <= mid){
            page_sum+=arr[i];
        }
        // If no, move to the next student. However, we also need to check if the number of students has exceeded the max. no. of students (OR) the current array value is greater than mid. 
        // If either of the above is true, return false, else assign current array value as new page sum.
        else{
            student_count++;
            if(student_count > m || arr[i] > mid){
                return false;
            }
            page_sum=arr[i];
        }
    }
    return true;
}

int allocateBooks(int arr[], int n, int m){
    int start=0, sum=0, ans=-1;

    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    int end=sum;
    int mid=start+(end-start)/2;

    while(start<=end){
        if(isPossible(arr, n, m, mid)){
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
    int arr[size] = {10,20,30,40};
    int num_students=2;
    

    cout<<allocateBooks(arr, size, num_students);
}