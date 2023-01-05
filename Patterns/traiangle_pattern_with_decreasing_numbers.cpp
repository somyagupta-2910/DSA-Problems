// Pattern
// 4
// 1
// 21
// 321
// 4321

#include <iostream>
using namespace std;

int main(){
    int n, i=1, j, count=1;
    cin>>n;

    //Outer loop prints n rows
    while(i<=n){
        j=1;
        count=i;
        // counter variable is used to track and print the count
        while(j<=i){
            cout<<count;
            count--;
            j+=1;
        }
        i+=1;
        cout<<endl;
    }
    // Technique 2
    // while(i<=n){
    //     j=1;
    //     // counter variable is used to track and print the count
    //     while(j<=i){
    //         cout<<i-j+1;
    //         j+=1;
    //     }
    //     i+=1;
    //     cout<<endl;
    // }
}
