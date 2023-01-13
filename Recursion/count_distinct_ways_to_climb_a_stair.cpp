// Ip: no. of stairs
// you can climb either one step or two steps at a time
// OP: No. ways to reach the top

#include <bits/stdc++.h>
using namespace std;

int countDistinctStairs(int nSteps){
    // Base case
    if(nSteps<0){ //such a stair does not exist
        return 0;
    }
    if(nSteps==0){
        return 1; //from oth stair we can go to 0th stair using 1 step
    }
    
    // Recursive relation
    // we reach the nth stair either from one stair below or two stairs below
    return countDistinctStairs(nSteps-1) + countDistinctStairs(nSteps-2);
}

int main(){
    int nSteps=5; //8th term in fibonacci series
    cout<<countDistinctStairs(nSteps);
}