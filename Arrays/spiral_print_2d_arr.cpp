#include <bits/stdc++.h>
using namespace std;

void spiral(vector<vector<int>> vec, int row, int col){
    vector<int> ans;
    // We print first row, last col., last row. and last col. and we cntinue in this manner. Also, correspondigly once the rows and cols. are printed, we increment the row and col.
    int count_of_elements=0, total_elements = row*col;
    int startingrow=0, startingcol=0, endingrow=row-1, endingcol = col-1;

    while(count_of_elements < total_elements){
        // print starting row
        // to print starting row, we go from startingcol to endingcol
        for(int i=startingcol; count_of_elements < total_elements && i<=endingcol; i++){
            ans.push_back(vec[startingrow][i]);
            count_of_elements++;
        }
        startingrow++;

        // print ending col.
        // to print ending col., we go from startingrow to endingrow
        for(int i=startingrow; count_of_elements < total_elements && i<=endingrow; i++){
            ans.push_back(vec[i][endingcol]);
            count_of_elements++;
        }
        endingcol--;

        // print ending row
        // to print ending row, we go from endingcol to startingcol
        for(int i=endingcol; count_of_elements < total_elements && i>=startingcol; i--){
            ans.push_back(vec[endingrow][i]);
            count_of_elements++;
        }
        endingrow--;

        // print starting col.
        // to print starting col., we go from endingcrow to startingrow
        for(int i=endingrow; count_of_elements < total_elements && i>=startingrow; i--){
            ans.push_back(vec[i][startingcol]);
            count_of_elements++;
        }
        startingcol++;
    }

    for(int x:ans){
        cout<<x<<" ";
    }
}

int main(){
    vector<vector<int>> vec = {{1, 2, 3}, {34, 45, 78}, {6,7,8}};
    spiral(vec, 3, 3); 
}