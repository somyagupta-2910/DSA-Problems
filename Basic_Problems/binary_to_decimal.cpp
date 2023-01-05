#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n, digit, ans=0, i=0;
    cin>>n;

    while (n!=0){
        digit=n%10; //Extract the last digit
        if (digit==1){
            ans+=digit*pow(2,i); //this step is used to convert it to a number
        }
        
        n=n/10; //Right shift to next bit
        i++;
    }
    cout<<ans;
}