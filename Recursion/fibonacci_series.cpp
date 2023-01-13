#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    // Base case
    if(n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }
    
    // Recursive relation
    // a term is sum of previous of two terms
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int n=8; //8th term in fibonacci series
    cout<<fibonacci(n);
}