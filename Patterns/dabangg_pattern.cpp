// Pattern
// 4
//    1
//   121
//  12321
// 1234321

#include <iostream>
using namespace std;

int main(){
    int n, i=1, j, k;
    cin>>n;

    while(i<=n){
        j=1;
        k=1;
        while(k<=n-i){
            cout<<" ";
            k++;
        }

        while(j<=i){
            cout<<j;
            j++;
        }

        int start=i-1;
        while(start){
            cout<<start;
            start--;
        }
        i+=1;
        cout<<endl;
    }
}