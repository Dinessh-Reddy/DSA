from typing import List


class Solution:

    def subarray_product_less_than_k(self, nums:List[int], k:int) -> int:
        """
        This function takes a array and returns the number of sub arrays that have product less than or equal to k
        """
        i,j,mul = 0,0,1
        ans = 0
        while j < len (nums):
            mul *= nums[j]
            while mul >= k and i <= j:
                mul //= nums[i]
                i += 1
            ans += j - i + 1
            j += 1
        return ans