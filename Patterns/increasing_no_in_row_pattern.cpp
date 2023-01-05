// Pattern
// 1234
// 1234
// 1234
// 1234

#include <iostream>
using namespace std;

int main(){
    int n, i=1, j;
    cin>>n;

    //Outer loop prints n rows
    while(i<=n){
        j=1;
        // This loop prints each i n times for a row
        while(j<=n){
            cout<<j;
            j+=1;
        }
        i+=1;
        cout<<endl;
    }
}
