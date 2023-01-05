// Pattern
// 4
//    1
//   22
//  333
// 4444

#include <iostream>
using namespace std;

int main(){
    int n, i=1, j, k;
    cin>>n;

    //Outer loop prints n rows
    while(i<=n){
        j=1;
        k=1;
        //This loop prints white spaces
        while(j<=n-i){
            cout<<" ";
            j++;
        }

        while(k<=i){
            cout<<i;
            k++;
        }
        
        i+=1;
        cout<<endl;
    }
}