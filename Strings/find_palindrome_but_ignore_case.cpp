#include<bits/stdc++.h>
using namespace std;

char toLower(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

int findlen(char name[]){
    int len=0;
    for(int i=0; name[i]!='\0'; i++){
        len++;
    }
    return len;
}

bool checkPalindrome(char name[], int len){
    int start=0, end=len-1;

    while(start<=end){
        if(toLower(name[start++]) != toLower(name[end--])){
            return false;
        }
    }
    return true;
}

int main(){
    char name[20];
    cin>>name;
    int len=findlen(name);
    cout<<checkPalindrome(name, len);
}