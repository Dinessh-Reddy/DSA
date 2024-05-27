#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

        int solution(vector<int>& nums, int k){
            int i = 0, j =0 , ans = 0, mul = 1;
            while(j < nums.size()){
                mul *= nums[j];
                while(i <= j and mul >= k){
                    mul /= nums[i];
                    i++;
                }
                j++;
                ans += j - i;
            }
            return ans;
        }
};