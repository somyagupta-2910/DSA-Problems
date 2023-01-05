// Pattern
// 3
// A
// BB
// CCC

#include <iostream>
using namespace std;

int main(){
    int n, i=1, j;
    cin>>n;
    
    while(i<=n){
        j=1;

        while(j<=i){
            cout<<char('A'+i-1);
            j+=1;
        }
        i+=1;
        cout<<endl;
    }
}
