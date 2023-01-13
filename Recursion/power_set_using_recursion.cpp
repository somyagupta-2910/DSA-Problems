// I/P: [1,2,3]
// O/P: {}, {1}, {2}, {1,2}, {3}, {1,3}, {2,3}, {1,2,3}
// set of all subsets is a power set

// Here, we go by the logic of including and excluding an element in every recursion call

#include <bits/stdc++.h>
using namespace std;

void power_set(vector<int> nums, vector<int> output, int index, vector<vector<int>>& ans){
    
    // Base case
    if(index>=nums.size()){
        // by the time we reach the base case, we have to send the output arr (comprising set answer after each recursion call) into the final answer vector
        ans.push_back(output);
        return ;
    }
    
    // Recursive Relation

    //Exclude
    power_set(nums, output, index+1, ans);
    
    //Include
    output.push_back(nums[index]);
    power_set(nums, output, index+1, ans);    
}

int main(){
    vector<int> nums{1,2,3};
    vector<vector<int> > ans; // the power of set will be stored in this array
    vector<int> output;
    int index=0;

    power_set(nums, output, index, ans);

    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}