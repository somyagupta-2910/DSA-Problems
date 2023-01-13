#include<bits/stdc++.h>
using namespace std;

char maxOccur(string s){
    int arr[26]={0};

    for(int i=0; i<s.length(); i++){
        int number=0;
        if ((s[i] >= 'a' && s[i] <= 'z')){
            number = s[i] - 'a';
        }
        else{
            number= s[i] - 'A';
        }
        arr[number]++;
    }

    int maxi=INT_MIN, maxiindex=0;
    for(int i=0; i<26; i++){
        if(arr[i] > maxi){
            maxi=arr[i];
            maxiindex=i;
        }
    }
    char finalans = 'a'+maxiindex;
    return finalans;
}

int main(){
    string s="Mommyyyy";
    cout<<maxOccur(s);
}