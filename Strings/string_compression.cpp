#include<bits/stdc++.h>
using namespace std;

// We have to tell how many time a character has been repeated
void remove_dadjacent_duplicates(string str1){
    vector<char> temp;
    int temp_index=0;
    for(int i=0; i<str1.length();){
        int count=1;
        int j=i+1;
        for(; j<str1.length(); j++){
            if(str1[i] == str1[j]){
                count++;
            }
            else{
                break;
            }
        }
        if(count > 1){
            temp.push_back(str1[i]);
            string cnt=to_string(count);
            for(char ch:cnt){
                temp.push_back(ch);
            }
            
        }
        else{
            temp.push_back(str1[i]);
        }
        i=j;
    }
    for(char x:temp){
        cout<<x;
    } 
}

int main(){
    string str1="abbbazyccf";
    remove_dadjacent_duplicates(str1);
}