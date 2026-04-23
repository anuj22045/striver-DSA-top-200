#include<bits/stdc++.h>
using namespace std;

class solution{
public:
    void rotate(vector<vector<int>>&matrix){
        int n = matrix.size();

        for(int i =0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for(int i =0;i<n;i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};
int main(){
    solution obj;
    int n;
    cout<<"enter the size of matrix\n" ;
    cin>>n;

    vector<vector<int>> matrix(n, vector<int>(n));

    cout<<"enter the matrix elements:\n";
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    obj.rotate(matrix);

    cout<<"\n rotated matrix:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}