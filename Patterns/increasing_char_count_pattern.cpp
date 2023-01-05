// Pattern
// 3
// ABC
// ABC
// ABC

#include <iostream>
using namespace std;

int main(){
    int n, i=1, j, count=1;
    cin>>n;
    
    while(i<=n){
        j=1;
        
        while(j<=n){
            cout<<char('A'+count-1);
            count++;
            j+=1;
        }
        i+=1;
        cout<<endl;
    }
}
