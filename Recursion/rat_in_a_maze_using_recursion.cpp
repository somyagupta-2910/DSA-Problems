// In a 2d array, the start point is (0,0) and end point is (1,1). We have 0's and 1's. 0 means, no path and 1 means open path. We have to reach the end point
// The Rat can go in all 4 directions.
// The output is all the possible solutions (with directions).

#include <bits/stdc++.h>
using namespace std;

bool canMove(int x, int y, int vec_size, vector<vector<int>> visited, vector<vector<int>>& inp_matrix){
    if((x>=0 && x<vec_size) && (y>=0 && y<vec_size) && (visited[x][y] == 0) && (inp_matrix[x][y] == 1)){
        return true;
    }
    return false;
}

void rat_in_a_maze_solve(vector<vector<int>>& inp_matrix, int vec_size, vector<string>& ans, int x, int y, vector<vector<int>> visited, string path){
    
    // Base case
    // When destination is reached
    if(x == vec_size-1 && y == vec_size-1){
        ans.push_back(path);
        return ;
    }
    
    // mark the current index as visited
    visited[x][y] = 1;

    // Recursive Relation
    // 4 choice of direction

    int newx, newy;
    //down
    newx=x+1;
    newy=y;
    if(canMove(newx, newy, vec_size, visited, inp_matrix)){
        path.push_back('D');
        rat_in_a_maze_solve(inp_matrix, vec_size, ans, newx, newy, visited, path);
        path.pop_back();
    }

    //left
    newx=x;
    newy=y-1;
    if(canMove(newx, newy, vec_size, visited, inp_matrix)){
        path.push_back('L');
        rat_in_a_maze_solve(inp_matrix, vec_size, ans, newx, newy, visited, path);
        path.pop_back();
    }

    //right
    newx=x;
    newy=y+1;
    if(canMove(newx, newy, vec_size, visited, inp_matrix)){
        path.push_back('R');
        rat_in_a_maze_solve(inp_matrix, vec_size, ans, newx, newy, visited, path);
        path.pop_back();
    }

    //up
    newx=x-1;
    newy=y;
    if(canMove(newx, newy, vec_size, visited, inp_matrix)){
        path.push_back('U');
        rat_in_a_maze_solve(inp_matrix, vec_size, ans, newx, newy, visited, path);
        path.pop_back();
    }

    // return function
    visited[x][y] = 0;
}

int main(){
    vector<vector<int>> inp_matrix {{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
    int vec_size=4;
    vector<vector<int>> visited = inp_matrix;

    // make visited matrix as 0
    for(int i=0; i<visited.size(); i++){
        for(int j=0; j<visited[i].size(); j++){
            visited[i][j] = 0;
        }
    }

    vector<string> ans; //store all the paths
    string path=""; // store one path
    int srcx=0, srcy=0;

    rat_in_a_maze_solve(inp_matrix, vec_size, ans, srcx, srcy, visited, path);

    sort(ans.begin(), ans.end());

    for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
    }
}