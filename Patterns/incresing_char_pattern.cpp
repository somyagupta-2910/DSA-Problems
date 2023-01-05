// Pattern
// 3
// AAA
// BBB
// CCC

#include <iostream>
using namespace std;

int main(){
    int n, i=1, j;
    cin>>n;
    
    while(i<=n){
        j=1;
        
        while(j<=n){
            cout<<char('A'+i-1);
            j+=1;
        }
        i+=1;
        cout<<endl;
    }
}
