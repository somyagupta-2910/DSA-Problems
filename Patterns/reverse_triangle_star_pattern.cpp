// Pattern
// 4
//    *
//   **
//  ***
// ****

#include <iostream>
using namespace std;

int main(){
    int n, i=1, j, k;
    cin>>n;

    //Outer loop prints n rows
    while(i<=n){
        j=1;
        //This loop prints white spaces
        while(j<=n-i){
            cout<<" ";
            j++;
        }
        k=1;
        //This loop prints stars
        while(k<=i){
            cout<<"*";
            k++;
        }
        i+=1;
        cout<<endl;
    }
}