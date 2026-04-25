#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
        vector<int> majorityElement(vector<int>&nums){
            int n = nums.size();
            int freq1, freq2=0;
            int ans1= INT_MIN;
            int ans2  = INT_MIN;

            for(int i =0;i<n;i++){
                if(freq1 == 0 && ans2 != nums[i]){
                    freq1 = 1;
                    ans1 = nums[i];
                }else if (freq2 == 0 && ans1 != nums[i]){
                    freq2 = 1;
                    ans2 = nums[i];
                }else if (nums[i] == ans1) freq1++;
                else if (nums[i] == ans2) freq2++;
                else{
                    freq1--, freq2--;
                }
            }
            vector<int>ls;
            freq1=freq2=0;
            for(int i =0;i<n;i++){
                if(nums[i] == ans1) freq1++;
                if(nums[i] == ans2) freq2++;

            }
            int mini = (int) (n/3) + 1;
            if(freq1 >= mini) ls.push_back(ans1);
            if(freq2>= mini) ls.push_back(ans2);
            sort(ls.begin(), ls.end());
            return ls;
        }
};
int main(){
    solution obj;
    int n ;
    cout<<"enter the size of array: \n";
    cin>>n;
    vector<int>nums(n);
    cout<<"enter elements: \n";
    for(int i =0;i<n;i++){
        cin>>nums[i];
    }
    vector<int>result = obj.majorityElement(nums);
    cout<<"majority elements: ";
    for(int x: result){
        cout<<x<<endl;
    }
    return 0;
}