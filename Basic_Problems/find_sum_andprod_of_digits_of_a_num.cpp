#include <iostream>
using namespace std;

int main(){
    int n, sum=0, prod=1, dig;
    cin>>n;
    while(n!=0){
        dig=n%10;
        sum+=dig;
        prod*=dig;
        n/=10;
    }
    cout<<prod-sum;
}