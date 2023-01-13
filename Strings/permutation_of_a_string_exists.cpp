#include<bits/stdc++.h>
using namespace std;

bool check_arrays_equal(int a[], int b[]){
    for(int i=0; i<26; i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

bool checkInclusion(string str1, string str2){
    int arr1[26] = {0};

    // Find character count of each element in string 1 and store it
    for(int i=0; i<str1.length(); i++){
        arr1[(str1[i]-'a')]++;
    }

    // Traverse through str2 by window size of length of str1 and compare the character count of s1's arr. If it matches, then str2 comprises permutation of str1
    
    for(int i=0; i<str2.length(); i++){
        int arr2[26]={0};
        int temp=i;
        int windowSize=i+str1.length();
        while(temp < windowSize){
            arr2[(str2[temp]-'a')]++;
            temp++;
        }
        
        if(check_arrays_equal(arr1, arr2))
            return true;
    }
    return false;    
}

int main(){
    string str1="ab";
    string str2="cibaooo";
    cout<<checkInclusion(str1, str2);
}