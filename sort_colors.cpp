#include<bits/stdc++.h>
using namespace std;

class solution{
public:
    void sortColors(vector<int>&nums){
        int low  =0, mid = 0, high = nums.size()-1;

        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[low], nums[mid]);
                mid++;
                low++;
            }else if (nums[mid] == 1){
                mid++;
            }else{
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};
int main(){
    solution obj;
    int n ;
    cout<<"enter the size of array";
    cin>>n;

    vector<int>nums(n);
    cout << "Enter " << n << " elements (only 0,1,2):\n";
    for(int i =0;i<n;i++){
        cin>>nums[i];
        if(nums[i] != 0 && nums[i] != 1 && nums[i] != 2){
            cout << "Invalid input! Only 0, 1, 2 allowed.\n";
            return 0;
        }
    }
    obj.sortColors(nums);
    cout << "Sorted array:\n";
    for(int x:nums){
        cout<<x <<" ";
    }
    return 0;
}