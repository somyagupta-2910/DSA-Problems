// Pattern
// 4
// ****
//  ***
//   **
//    *
#include <iostream>
using namespace std;

int main(){
    int n, i=1, j, k;
    cin>>n;

    //Outer loop prints n rows
    while(i<=n){
        j=1;
        k=1;
        while(k<=i-1){
            cout<<" ";
            k++;
        }
        //This loop prints white spaces
        while(j<=n-i+1){
            cout<<"*";
            j++;
        }
        i+=1;
        cout<<endl;
    }
}