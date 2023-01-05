// Pattern
// 4
// D
// CD
// BCD
// ABCD

#include <iostream>
using namespace std;

int main(){
    int n, i=1, j;
    cin>>n;
    
    while(i<=n){
        j=1;
        char start='A'+n-i;
        while(j<=i){
            cout<<start;
            start++;
            j++;
        }
        i+=1;
        cout<<endl;
    }
}
