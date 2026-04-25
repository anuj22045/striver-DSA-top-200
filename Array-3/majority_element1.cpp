#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
        int majorityelem(vector<int>&nums){
            int freq =0;
            int ans=0;
            int n = nums.size();
            for(int i =0;i<n;i++){
                if(freq ==0){
                    freq =1;
                    ans = nums[i];

                }else if( ans == nums[i]){
                    freq++;
                }else{
                    freq--;
                }
            }
            freq=0;
            for(int x: nums){
                if(x ==ans) freq++;
            }
            if(freq > n/2){
                return ans;
            }
            return -1;
        }
};
int main(){
    solution obj;
    int n ;
    cout<<"enter the size of array:\n";
    cin>>n;
    vector<int>nums(n);
    cout<<"enter the elements:\n";
    for(int i =0;i<n;i++){
        cin>>nums[i];
    }

    int result = obj.majorityelem(nums);

    if(result == -1){
        cout<<"no majority element\n";
    }
    else{
        cout<<"majority element: "<<result<<endl;
    }
    return 0;
}