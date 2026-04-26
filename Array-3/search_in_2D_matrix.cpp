#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
        bool searchMatrix(vector<vector<int>>&matrix, int target){
            int m = matrix.size();
            int n = matrix[0].size();

            int low = 0, high = m*n-1;
            while(low<=high){
                int mid = (low+high) /2;
                int row = mid /n;
                int col = mid %n;

                if(matrix[row][col] == target){
                    return true;
                }
                else if(matrix[row][col]< target){
                    low = mid+1;
                }else{
                    high = mid -1;
                }
            }
            return false;
        }
};
int main(){

    int m,n;
    cout<<"enter the number of rows and column\n";
    cin>>m>>n;
    vector<vector<int>> matrix(m, vector<int>(n));
    cout<<"enter matrix elements: \n";
    for(int i =0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    int target;
    cout<<"enter target element: ";
    cin>>target;

    solution obj;

    if(obj.searchMatrix(matrix, target)){
        cout<<"target found\n";
    }else{
        cout<<"target not found\n";
    }
    return 0;

}