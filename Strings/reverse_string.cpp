#include<bits/stdc++.h>
using namespace std;

int findlen(char name[]){
    int len=0;
    for(int i=0; name[i]!='\0'; i++){
        len++;
    }
    return len;
}

void reverse(char name[], int len){
    int start=0, end=len-1;

    while(start<=end){
        swap(name[start++], name[end--]);
    }
}

int main(){
    char name[20];
    cin>>name;
    int len=findlen(name);
    reverse(name, len);
    cout<<name;
}