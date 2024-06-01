from typing import List


class Solution:

    def running_sum(self, nums:List[int]):
        for i in range(1, len(nums)):
            nums[i] += nums[i-1]
        return nums