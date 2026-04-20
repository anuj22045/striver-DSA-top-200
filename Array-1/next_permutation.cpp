#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int ind = -1;

        // Step 1: Find breakpoint
        for(int i = n - 2; i >= 0; i--) {
            if(nums[i] < nums[i + 1]) {
                ind = i;
                break;
            }
        }

        // Step 2: If no breakpoint
        if(ind == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Step 3: Find next greater element and swap
        for(int i = n - 1; i > ind; i--) {
            if(nums[i] > nums[ind]) {
                swap(nums[i], nums[ind]);
                break;
            }
        }

        // Step 4: Reverse the suffix
        reverse(nums.begin() + ind + 1, nums.end());
    }
};

int main() {
    Solution obj;

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    obj.nextPermutation(nums);

    cout << "\nNext Permutation:\n";
    for(int x : nums) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}