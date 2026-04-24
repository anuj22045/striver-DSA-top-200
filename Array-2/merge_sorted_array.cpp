#include<bits/stdc++.h>
using namespace std;

class solution{
public:
    void merge(vector<int>&nums1, int m, vector<int>&nums2, int n){
        int i = m-1;
        int j = n-1;
        int k = m+n-1;

        while(i >= 0 && j>=0){
            if(nums1[i] > nums2[j]){
                nums1[k--] = nums1[i--];
            }else{
                nums1[k--] = nums2[j--];
            }
        }
        while(j >= 0){
            nums1[k--] = nums2[j--];
        }

    }
};

int main(){
    solution obj;
    int m ,n;
    cout<<"enter the size of nums1\n";
    cin>>m;

    cout<<"enter the size of nums2\n";
    cin>>n;
    vector<int>nums1(m+n);
    vector<int>nums2(n);

    cout<<"enter"<<m<<"element of nums1\n";
    for(int i =0;i<m;i++){
        cin>>nums1[i];
    }
    cout<<"enter "<<n<<"elements of num2\n";
    for(int i=0;i<n;i++){
        cin>>nums2[i];
    }
    obj.merge(nums1,m, nums2, n);
    cout<<"\n merged array:\n";
    for(int x: nums1){
        cout<<x<<" ";
    }
    return 0;
}