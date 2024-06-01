let solution = function (nums, k) {
    let i = 0, j = k, s = 0;
    for (let i = 0; i < k; i++)
        s += nums[i]
    let m = s;
    while (j < nums.size) {
        s = s - nums[i] + nums[j]
        m = Math.max(s, m)
        i += 1
        j += 1
    }
    return m / k
}