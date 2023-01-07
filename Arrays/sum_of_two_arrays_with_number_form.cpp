#include <bits/stdc++.h>
using namespace std;

void sum_of_arrays(int arr[], int n, int brr[], int m){
    int i=n-1, j=m-1, carry=0;
    vector<int> vec;

    // We start from last elements of the arrays and add the value along with carry.
    // If we divide a sum by 10, we get its carry digit. For 18 when divided by 10, we get 1 (its carry) and when we mod by 10 (for 18, mod with 10 is 8), it is the sum itself.
    while(i>=0 && j>=0){
        int sum = arr[i] + brr[j] + carry;
        i--;
        j--;
        carry=sum/10;
        sum=sum%10;
        vec.push_back(sum);
    }

    // When arr 1 is bigger than arr 2
    while(i>=0){
        int sum = arr[i] + carry;
        i--;
        carry=sum/10;
        sum=sum%10;
        vec.push_back(sum);
    }

    // When arr 2 is bigger than arr 1
    while(j>=0){
        int sum = brr[j] + carry;
        j--;
        carry=sum/10;
        sum=sum%10;
        vec.push_back(sum);
    }

    // When carry of the sums of arr is left.
    while(carry!=0){
        int sum = carry;
        carry=sum/10;
        sum=sum%10;
        vec.push_back(sum);
    }

    reverse(vec.begin(), vec.end());
    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }
}

int main(){
    int arr[3] = {1,2,3};
    int brr[2] = {9,9};
    sum_of_arrays(arr,3,brr,2);
}