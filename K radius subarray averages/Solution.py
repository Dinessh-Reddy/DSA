from typing import List


class Solution:
    def getAverages(self, nums: List[int], k: int) -> List[int]:
        pre = [0 for _ in range(len(nums) + 1)]
        for i in range(len(nums)):
            pre[i + 1] = pre[i] + nums[i]
        ans = [0 for _ in range(len(nums))]
        for i in range(len(nums)):
            if i < k or i >= (len(nums) - k):
                ans[i] = -1
            else:
                ans[i] = (pre[i + k + 1] - pre[i - k]) // (2 * k + 1)
        return ans 
        