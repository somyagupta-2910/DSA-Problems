#include<bits/stdc++.h>
using namespace std;

char toLower(char ch){
    if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool validString(char ch){
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
        return 1;
    }
    return 0;
}

bool checkPalindrome(string s){
    string temp="";

    // remove invalid characters
    for(int i=0; i<s.length(); i++){
        if(validString(s[i])){
            temp.push_back(s[i]);
        }
    }

    // convert all to lowercase
    for(int i=0; i<s.length(); i++){
        temp[i]=toLower(temp[i]);
    }

    int start=0, end=temp.length()-1;

    while(start<=end){
        if(temp[start++] != temp[end--]){
            return false;
        }
    }
    return true;
}

int main(){
    string s="A man, a plan, a canal: Panama";
    cout<<checkPalindrome(s);
}