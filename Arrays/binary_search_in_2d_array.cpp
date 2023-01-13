#include <bits/stdc++.h>
using namespace std;

bool binarySearch(vector<vector<int>> vec, int target){
    int row=vec.size();
    int col=vec[0].size();
    
    int start=0;
    int end=(row*col)-1;
    int mid = start + (end-start)/2;

    while(start<=end){
        // find element in 2d vector
        // mid/col fetches the row index
        // mid%col fetches the col index
        int element = vec[mid/col][mid%col];
        if(element == target){
            return true;
        }
        if(element < target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid = start + (end-start)/2;
    }
    return false;
}

int main(){
    vector<vector<int>> vec = {{1, 2, 3}, {6,7,8}, {34, 45, 78}};
    int target = 8;
    cout<<binarySearch(vec, target); 
}