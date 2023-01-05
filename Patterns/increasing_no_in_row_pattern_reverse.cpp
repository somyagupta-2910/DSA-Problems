// Pattern
// 4321
// 4321
// 4321
// 4321

#include <iostream>
using namespace std;

int main(){
    int n, i=1, j;
    cin>>n;

    //Outer loop prints n rows
    while(i<=n){
        j=n;
        // This loop prints each i n times for a row
        while(j>=1){
            cout<<j;
            j-=1;
        }
        i+=1;
        cout<<endl;
    }
    // Technique 2
    // //Outer loop prints n rows
    // while(i<=n){
    //     j=1;
    //     // This loop prints each i n times for a row
    //     while(j<=n){
    //         cout<<n-j+1;
    //         j+=1;
    //     }
    //     i+=1;
    //     cout<<endl;
    // }
}
