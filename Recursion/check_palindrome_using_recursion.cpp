#include <bits/stdc++.h>
using namespace std;

bool check_Palindrome(string str, int start, int end){
    // Base case
    if(start>end){
        return true;
    }

    if(str[start] == str[end])
        //Recursiev Relation
        return check_Palindrome(str, start+1, end-1);
    else
        return false;
    
}

int main(){
    string str="abba";
    cout<<check_Palindrome(str, 0, str.length()-1);
}
