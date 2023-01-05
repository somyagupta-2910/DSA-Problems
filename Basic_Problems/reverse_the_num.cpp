#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n, digit, ans=0;
    cin>>n;

    while (n!=0){       
        digit=n%10; //Extract the last digit 
        if(ans*10 > INT_MAX || ans*10<INT_MIN){
            break;
        }
        ans=ans*10+digit;
        n=n/10; //Right shift to next bit
    }

    cout<<ans;
}