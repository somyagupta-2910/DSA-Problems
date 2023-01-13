#include <bits/stdc++.h>
using namespace std;

string reverse_string(string str, int start, int end){
    // Base case
    if(start>end){
        return str;
    }

    swap(str[start], str[end]);

    //Recursiev Relation
    return reverse_string(str, start+1, end-1);
    
}

int main(){
    string str="somya";
    cout<<reverse_string(str, 0, str.length()-1);
}