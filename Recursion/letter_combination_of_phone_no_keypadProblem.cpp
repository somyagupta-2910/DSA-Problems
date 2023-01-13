//Assume anormal phone keypad which has numbers and alphabets attached to it, like 2 having "abc" on it and 3 having "def" on so on. 1 and 0 doesnt have any alphabets on it.

// You have to generate the strings by using a given number string from 2 to 9

// IP = "23"
// OP: ad, ae, af, bd, be, bf, cd, ce, cf

#include <bits/stdc++.h>
using namespace std;

// Here, we will again follow the incldue and exclude logic of subsequence.
void keypad_solution(string inp_str, string output, int index, vector<string>& ans, string mapping_keys_with_digits[]){
    
    // Base case
    if(index>=inp_str.length()){
        if(output.length()>0){
            // to avoid empty string from being printed
            ans.push_back(output);
        }
        return ;
    }

    int number=inp_str[index] - '0'; // convert char to num
    string value=mapping_keys_with_digits[number];

    // traversing through alphabets of a particular number (for 2 -> abc)
    for(int i=0; i<value.length(); i++){
        output.push_back(value[i]);
        keypad_solution(inp_str, output, index+1, ans, mapping_keys_with_digits);
        output.pop_back(); // remove the alphabet before moving to the next combination.
    }   
}

int main(){
    string inp_str="23";
    vector<string> ans; // the power of set will be stored in this array
    string output="";
    int index=0;
    string mapping_keys_with_digits[10]={"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    keypad_solution(inp_str, output, index, ans, mapping_keys_with_digits);

    for(string x:ans){
        cout<<x<<" ";
    }
}