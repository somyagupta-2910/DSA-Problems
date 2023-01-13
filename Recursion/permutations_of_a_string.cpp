// All permuttations of a string in lexicographically increasing order.

// IP abc
// OP: abc, acb, bac, bca, cab, cba

#include <bits/stdc++.h>
using namespace std;

// Here, we go with swapping logic.
void permutations(vector<int> nums, int index, vector<vector<int>>& ans){
    
    // Base case
    if(index>=nums.size()){
        ans.push_back(nums);
        return;
    }

    for(int j=index; j<nums.size(); j++){
        swap(nums[index], nums[j]);
        permutations(nums, index+1, ans);
        // backtrack
        swap(nums[index], nums[j]); // since, we are making changes in the original array, we swap it back when returning.
    }
}

int main(){
    vector<int> nums{1,2,3};
    vector<vector<int>> ans; // the power of set will be stored in this array
    int index=0;

    permutations(nums, index, ans);

    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}