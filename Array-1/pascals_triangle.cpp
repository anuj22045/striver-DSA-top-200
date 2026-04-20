#include<bits/stdc++.h>
using namespace std;

class solution{
public:
    vector<int>generateRow(int row){
        long long ans=1;
        vector<int>ansRow;
        ansRow.push_back(1);
        for(int col = 1;col<row;col++){
            ans = ans * (row-col);
            ans /= col;
            ansRow.push_back(ans);
        }
        return ansRow;
    }
    vector<vector<int>>generate(int numRows){
        vector<vector<int>>ans;
        for(int i =1;i<=numRows;i++){
            ans.push_back(generateRow(i));
        }
        return ans;
    }

};
int main(){
    solution obj;
    int numRows;
    cout<<"enter the number of rows: "<<endl;
    cin>>numRows;

    vector<vector<int>>result = obj.generate(numRows);
    cout<<"\n pascals traingle: \n";
    for(auto row: result){
        for(auto val:row){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}