// Pattern
// 4
// 1234
//  234
//   34
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
        int start=i;
        while(j<=n-i+1){
            cout<<start;
            start++;
            j++;
        }
        i+=1;
        cout<<endl;
    }
}