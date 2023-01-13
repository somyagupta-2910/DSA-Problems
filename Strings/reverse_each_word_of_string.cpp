#include<bits/stdc++.h>
using namespace std;

string reverseStr(string str){
    int start=0, end=str.length()-1;

    while(start<=end){
        swap(str[start++], str[end--]);
    }
    return str;
}

string reverse_Each_word(string s){
    string temp="", finalstr="";

    for(int i=0; i<s.length(); i++){
        if (s[i] == ' '){
            finalstr=finalstr+reverseStr(temp);
            finalstr+=" ";
            temp="";
        }
        else if(i == s.length()-1){
            temp+=s[i];
            finalstr=finalstr+reverseStr(temp);
        }
        else{
            temp+=s[i];
        }
    }
    return finalstr;
}

int main(){
    string s="My Name is Somya";
    cout<<reverse_Each_word(s);
}