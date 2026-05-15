#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
        int lengthOfSubstring(string s){
            vector<int>mpp(256, -1);
            int left=0, right=0, maxSub=0;
            int n = s.size();
            while(right < n){
                left = max(mpp[s[right]] + 1, left);
                mpp[s[right]] = right;
                maxSub = max(maxSub, right - left + 1);
                right ++;
            }
            return maxSub;
        }
};


int main(){
    solution obj;
    string s;
    cout<<"enter the string: ";
    cin>>s;
    int ans = obj.lengthOfSubstring(s);
    cout<<"the length of longest substring without repeating character is: "<<ans<<endl;

    return 0;

}