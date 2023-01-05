// Pattern
// 3
// ABC
// BCD
// CDE

#include <iostream>
using namespace std;

int main(){
    int n, i=1, j;
    cin>>n;
    
    while(i<=n){
        j=1;
        int count=i;
        while(j<=n){
            cout<<char('A'+count-1);
            count++;
            j+=1;
        }
        i+=1;
        cout<<endl;
    }
}
