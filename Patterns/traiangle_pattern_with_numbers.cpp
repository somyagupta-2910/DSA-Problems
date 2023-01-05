// Pattern
// 4
// 1
// 22
// 333
// 4444

#include <iostream>
using namespace std;

int main(){
    int n, i=1, j;
    cin>>n;

    //Outer loop prints n rows
    while(i<=n){
        j=1;
        // counter variable is used to track and print the count
        while(j<=i){
            cout<<i;
            j+=1;
        }
        i+=1;
        cout<<endl;
    }
}
