/*
Arrays are sorted. We need to find the intersection
Prob URL: https://www.codingninjas.com/codestudio/problems/intersection-of-2-arrays_1082149?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1
*/

#include <bits/stdc++.h>
using namespace std;

void uniqueelement(int arr1[], int n, int arr2[], int m){
    vector<int> ans;

    //Optimized Solution using 2-pointer approach
    int i=0, j=0;

    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }

//    for (int i=0; i<n; i++){
//         int element = arr1[i];

//         for(int j=0; j<m; j++){
//             // Since, the arrays are sorted. Hence, we need not waste time in searching further elements.
//             if(element < arr2[j]){
//                 break;
//             }
//             //Here, we look for the first match of element in second array
//             if(element == arr2[j]){
//                 // If a match is found, push it into a vector and make the element in second array as INT_MIN so that we do not have another match.
//                 //This is more of a mapping problem.
//                 ans.push_back(element);
//                 arr2[j] = INT_MIN;
//                 break;
//             }
//         }
//    }
   for(int x:ans){
    cout<<x<<" ";
   }
}

int main(){
    int arr1[6] = {1, 2, 2, 2, 3, 4};
    int arr2[4] = {2, 2, 3, 3};


    uniqueelement(arr1, 6, arr2, 4);
} 