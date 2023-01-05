// Pattern
// 3
// ABC
// ABC
// ABC

#include <iostream>
using namespace std;

int main(){
    int n, i=1, j;
    cin>>n;
    
    while(i<=n){
        j=1;
        
        while(j<=n){
            cout<<char('A'+j-1);
            j+=1;
        }
        i+=1;
        cout<<endl;
    }
}
