from typing import List



class Solution:
    def squares_of_the_sorted_array(self, nums: List[int])->List[int]:
        i, j = 0, len(nums) - 1
        k = len(nums) - 1
        temp = [0 for _ in range(len(nums))]
        while i <= j:
            if abs(nums[i]) > abs(nums[j]):
                temp[k]= nums[i] ** 2
                i += 1
            else:
                temp[k] = nums[j] ** 2
                j -= 1
            k -= 1
        return temp
