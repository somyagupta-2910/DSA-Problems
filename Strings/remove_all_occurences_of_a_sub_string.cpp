#include<bits/stdc++.h>
using namespace std;

string remove_occurence_of_sub_string(string str1, string str2){

    while(str1.length() != 0 && str1.find(str2) < str1.length()){
        str1.erase(str1.find(str2), str2.length());
    }
    return str1;
}

int main(){
    string str1="daabcbaabcbc";
    string str2="abc";
    cout<<remove_occurence_of_sub_string(str1, str2);
}