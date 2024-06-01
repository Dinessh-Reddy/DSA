/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var longestOnes = function (nums, k) {
    let i = 0, j = 0, m = 0, p = k;
    while (j < nums.length) {
        if (nums[j] == 0) {
            while (p == 0 && i <= j) {
                if (nums[i] == 0) { i++; break; }
                i++;
            }
            p = Math.max(0, p - 1);
        }
        j += 1
        m = Math.max(m, j - i)
    }
    return m
};