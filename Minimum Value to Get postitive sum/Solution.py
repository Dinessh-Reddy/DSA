from typing import List


class Solution:
    
    def minStartValue(self, nums: List[int]) -> int:
        ans = 0
        pre = 1
        ans = 1
        for i in range(len(nums)):
            pre += nums[i]
            if pre < 1:
                ans += (1 + abs(pre))
                pre = 1
        return ans if ans > 0 else 1
             
            
        
        
