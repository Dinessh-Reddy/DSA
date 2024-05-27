class Solution {

    subarray_product_less_than_k(nums, k) {
        let i = 0, j = 0, ans = 0, mul = 1;
        while (j < nums.length) {
            mul *= nums[j]
            while (mul >= k) {
                mul /= nums[i]
                i += 1
            }
            ans += j - i + 1
            j += 1
        }
        return ans
    }
}