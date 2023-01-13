#include<bits/stdc++.h>
using namespace std;

string remove_dadjacent_duplicates(string str1){
    string temp="";
    for(int i=0; i<str1.length(); i++){
        temp.push_back(str1[i]);
        if(temp.length()>=2 && (temp[temp.length()-1] == temp[temp.length()-2])){
            temp.pop_back();
            temp.pop_back();
        }
    }
    return temp;    
}

int main(){
    string str1="abbazyccf";
    cout<<remove_dadjacent_duplicates(str1);
}