#include <bits/stdc++.h>
using namespace std;

// adding decimal precision
double morePrecision(int n, int precision, int intsqrtval){
    double factor=1;
    double ans=intsqrtval;

    for(int i=0; i<precision; i++){
        factor/=10;

        for(double j=ans; j*j<n; j+=factor){
            ans=j;
        }
    }
    return ans;
}

long long int binarySearchSqrt(int key){
    int start=0, end=key;
    long long int mid=start + (end-start)/2;

    int ans=-1;

    while(start<=end){
        int square=mid*mid;

        if(square==key){
            return mid;
        }

        if(square < key){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start + (end-start)/2;
    }

    return ans;
}

int main(){
    // The logic is that, we have to find square root of 101.
    // We form an array of numbers from 0 to 101.
    // We do binary search and see if the mid term's square si equal to desired number, if it is greater, we go to the left half.
    // If it is equa;, it is the ans
    // If it is less, it is the temporary answer and we move towards the right hand side
    int key=37;
    int insqrt=binarySearchSqrt(key);
    cout<<"Integer part of Sqrt is "<<binarySearchSqrt(key)<<endl;
    cout<<"Precision part of Sqrt is "<<morePrecision(key, 3, insqrt);
}