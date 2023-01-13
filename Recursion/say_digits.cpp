#include <bits/stdc++.h>
using namespace std;

void saydigit(int n, string arr[]){
    // Base case
    if(n==0){
        return;
    }
    
    //processing
    int digit = n%10;
    n=n/10;

    // Recursive relation
    saydigit(n, arr);

    cout<<arr[digit]<<" ";

}

int main(){
    int n=402; //8th term in fibonacci series
    string arr[10]={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    saydigit(n, arr);
}