// Pattern
// ***
// ***
// ***

#include <iostream>
using namespace std;

int main(){
    int n, i=1, j;
    cin>>n;

    //Outer loop prints n rows
    while(i<=n){
        j=1;
        // This loop prints each n stars for a row
        while(j<=n){
            cout<<"*";
            j+=1;
        }
        i+=1;
        cout<<endl;
    }
}