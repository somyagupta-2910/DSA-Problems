// Pattern
// 3
// 123
// 456
// 789

#include <iostream>
using namespace std;

int main(){
    int n, i=1, j, count=1;
    cin>>n;

    //Outer loop prints n rows
    while(i<=n){
        j=1;
        // counter variable is used to track and print the count
        while(j<=n){
            cout<<count;
            count++;
            j+=1;
        }
        i+=1;
        cout<<endl;
    }
}
