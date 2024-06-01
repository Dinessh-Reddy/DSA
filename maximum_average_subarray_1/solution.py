from typing import List


class Solution:
    
    def average_subarray(self, nums:List[int], k:int)->int:
        i, j = 0, k
        s = sum(nums[:k])
        m = s
        while j < len(nums):
            s = s - nums[i] + nums[j]
            m = max(m, s)
            i += 1
            j += 1
        return m / k