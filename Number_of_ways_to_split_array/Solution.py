from typing import List



class Solution:


    def split(self, nums: List[int])->int:
        """The split is valid if sum[i:k] >= sum[k:]"""
        for i in range(1, len(nums)):
            nums[i] += nums[i - 1]

        ans = 0
        for i in range(1, len(nums)):
            if nums[i -1] >= nums[len(nums) - 1] - nums[i - 1]:
                ans += 1
        return ans
        