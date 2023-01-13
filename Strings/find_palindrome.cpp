#include<bits/stdc++.h>
using namespace std;

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
        if(name[start++] != name[end--]){
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