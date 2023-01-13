#include<bits/stdc++.h>
using namespace std;

string replaceSpaces(string s){
    string temp="";
    string insertchar="@40";

    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            temp+=s[i];
        }
        else{
            temp+=insertchar;
        }
    }
    return temp;
}

int main(){
    string s="My Name is Khan";
    cout<<replaceSpaces(s);
}