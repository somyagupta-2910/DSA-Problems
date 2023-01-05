// Pattern
// 4
// 1
// 23
// 345
// 4567

#include <iostream>
using namespace std;

int main(){
    int n, i=1, j, count;
    cin>>n;

    //Outer loop prints n rows
    while(i<=n){
        j=1;
        // counter variable is used to track and print the count
        count=i;
        while(j<=i){
            cout<<count;
            count++;
            j+=1;
        }
        i+=1;
        cout<<endl;
    }
}
