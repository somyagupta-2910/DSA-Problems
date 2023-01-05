// Pattern
// 4
// 1111
//  222
//   33
//    4

#include <iostream>
using namespace std;

int main(){
    int n, i=1, j, k;
    cin>>n;

    while(i<=n){
        j=1;
        k=1;
        while(k<=i-1){
            cout<<" ";
            k++;
        }
        
        while(j<=n-i+1){
            cout<<i;
            j++;
        }
        i+=1;
        cout<<endl;
    }
}