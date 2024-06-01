#include<bits/stdc++.h>
using namespace std;


class Solution{
    int split(vector<int>& nums){
        for (int i = 1; i < nums.size(); i++){
            nums[i] += nums[i - 1];
        }
        int ans = 0;
        for (int i = 1; i < nums.size(); i++){
            if(nums[i-1] >= nums[nums.size()- 1] - nums[i-1]){
                ans++;
            }
        }
        return ans;
    }
};