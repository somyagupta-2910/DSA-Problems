// Pattern
// 4
// A
// BC
// DEF
// GHIJ

#include <iostream>
using namespace std;

int main(){
    int n, i=1, j, count=0;
    cin>>n;
    
    while(i<=n){
        j=1;

        while(j<=i){
            cout<<char('A'+count);
            count++;
            j+=1;
        }
        i+=1;
        cout<<endl;
    }
}
