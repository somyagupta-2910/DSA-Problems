#include <bits/stdc++.h>
using namespace std;

int find_power(int a, int b){
    // Base case
    if(b==0){
        return 1;
    }

    if(b==1){
        return a;
    }

    if(b%2 == 0){
        // 2^8 = 2^4 * 2^4
        return find_power(a, b/2) * find_power(a, b/2);
    }
    else{
        // 2^9 = 2* 2^4 * 2^4
        return find_power(a, 1) * find_power(a, b/2) * find_power(a, b/2);
    }
}

int main(){
    int a=3, b=11;
    cout<<find_power(a, b);
}
