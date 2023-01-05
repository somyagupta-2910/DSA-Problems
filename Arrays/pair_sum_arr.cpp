#include <bits/stdc++.h>
using namespace std;

void uniqueelement(int arr[], int size, int sum){
    vector<vector<int>> ans;

    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i]+arr[j]==5){
                vector<int> temp;
                // The pair sum should be sorted
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
                break;
            }
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }    
        cout << endl;
    }

}

int main(){
    int arr1[6] = {1, 2, 2, 2, 3, 4};
    int sum=5;

    uniqueelement(arr1, 6, sum);
} 