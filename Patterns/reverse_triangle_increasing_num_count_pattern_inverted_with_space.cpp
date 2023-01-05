// Pattern
// 4
//    1
//   23
//  456
// 78910

#include <iostream>
using namespace std;

int main(){
    int n, i=1, j, k, count=1;
    cin>>n;

    while(i<=n){
        j=1;
        k=1;
        while(k<=n-i){
            cout<<" ";
            k++;
        }
        
        while(j<=i){
            cout<<count;
            count++;
            j++;
        }
        i+=1;
        cout<<endl;
    }
}