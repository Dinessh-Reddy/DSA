from typing import List


class Solution:

    def longest_ones(self, nums:List[int], k: int):
        """This function returns maximum length of subarray with consecutive 1s given we can fllip k 0s"""

        i, j, m, p = 0, 0, 0, k
        while j < len(nums):
            if nums[j] == 0:
                while p == 0 and i <= j:
                    if nums[i] == 0:
                        p += 1
                    i += 1
                p -= 1
            j += 1
            m = max(m, j - i)
        return m
                