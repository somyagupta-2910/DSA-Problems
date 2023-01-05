#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n, m;
    cin>>n;
    m=n;
    int mask=0;

    //edge case
    if (n==0){
        cout<<1;
    }
    else{
        // We create a mask that will be multiplied with complement of input number. This is becasue when the input number is complement, all the MSB's will be 1, but we have to ignore them completely by doing and operation with mask.
        while(m!=0){
            mask=(mask<<1)|1;
            m=m>>1;
        }
    cout<<((~n) & mask);
    }
    
}