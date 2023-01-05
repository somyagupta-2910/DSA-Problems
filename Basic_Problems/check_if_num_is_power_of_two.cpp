#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n, m;
    cin>>n;
    
    if(n%2!=0){
        cout<<"False";
    }
    else{
        bool flag=true;
        n/=2;
        while(n!=0){
            if(n==2){
                break;
            }
            if(n%2!=0){
                flag=false;
                break;
            }
            n/=2;
        }
        if(flag==true){
        cout<<"True";
        }
        else{
            cout<<"False";
        }
    }
    
}