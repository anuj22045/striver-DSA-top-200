#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
        int findDuplicates(vector<int>&nums){
            int n = nums.size();
            sort(nums.begin(), nums.end());
            for(int i =0;i<n-1;i++){
                if(nums[i] == nums[i+1]){
                    return nums[i];
                }
            }
            return -1;
        }
};
int main(){
    solution obj;
    int n;
    cout<<"enter the size of array\n";
    cin>>n;
    vector<int>nums(n);
    cout<<"enter elements: \n";
    for(int i =0;i<n;i++){
        cin>>nums[i];
    }
    int duplicate = obj.findDuplicates(nums);
    cout<<"duplicate number"<<duplicate<<endl;
    return 0;

}