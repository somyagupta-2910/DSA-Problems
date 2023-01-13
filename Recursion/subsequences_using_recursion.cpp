//a subsequence of a given sequence is a sequence that can be derived from the given sequence by deleting some or no elements without changing the order of the remaining elements. For example, the sequence is a subsequence of obtained after removal of elements.

// Here, also we go with the same exclude and include logic og power set problem.

#include <bits/stdc++.h>
using namespace std;

void subsequences(string inp_str, string output, int index, vector<string>& ans){
    
    // Base case
    if(index>=inp_str.length()>0){
        if(output.length()){
            // to avoid empty string from being printed
            ans.push_back(output);
        }
        return ;
    }
    
    // Recursive Relation

    //Exclude
    subsequences(inp_str, output, index+1, ans);
    
    //Include
    output+=inp_str[index];
    subsequences(inp_str, output, index+1, ans);    
}

int main(){
    string inp_str="abc";
    vector<string> ans; // the power of set will be stored in this array
    string output="";
    int index=0;

    subsequences(inp_str, output, index, ans);

    for(string x:ans){
        cout<<x<<endl;
    }
}