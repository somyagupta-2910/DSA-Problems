#include <iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=2; i<=n; i++){
            fact*=i;
    }
    return fact;
}

int ncr(int n, int r){
    if (r==0){
        return 1;
    }
    else if (r==1){
        return n;
    }
    else{
        // n factorial
        int n_factor=1, r_factor=1, n_r_factor=1;
        n_factor=factorial(n);
        // r factorial
        r_factor=factorial(r);
        // n-r factorial
        n_r_factor=factorial(n-r);

        return n_factor/(r_factor*n_r_factor);
    }
}

int main(){
    int n, r;
    cin>>n>>r;

    cout<<"ncr is "<<ncr(n,r)<<endl;

    
}