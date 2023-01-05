#include <iostream>
using namespace std;

void uniqueelements(int arr[], int size){
    int backflag, forwardflag;
    for(int i=0; i<size; i++){
        backflag=1;
        forwardflag=1;
        // searching backwards
        for(int j=i-1; j>=0; j--){
            if(arr[i] == arr[j]){
                backflag=0;
                break;
            }
        }
        for(int k=i+1; k<size; k++){
            if(arr[i] == arr[k]){
                forwardflag=0;
                break;
            }
        }
        if(backflag==0 || forwardflag == 0){
            continue;
        }
        else{
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
}

int main(){
    int arr[6] = {5, 7, 7, 32, 12, 32};
    int brr[5] = {27, 27, 98, 1, 12};

    uniqueelements(arr, 6);
    uniqueelements(brr, 5);
}