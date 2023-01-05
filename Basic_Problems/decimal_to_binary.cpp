#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n, bit, ans=0, i=0;
    cin>>n;

    while (n!=0){
        bit=n&1; //Extract the binary digit (101)
        ans=(bit*pow(10,i)) + ans; //this step is used to convert it to a number
        n=n>>1; //Right shift to next bit
        i++;
    }
    cout<<ans;
}