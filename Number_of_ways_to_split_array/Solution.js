let ans = function (nums) {
    let ans = 0;
    for (let i = 1; i < nums.length; i++){
        nums[i] += nums[i - 1]
    }
    for (let i = 1; i < nums.length; i++){
        if (nums[i - 1] >= nums[nums.length - 1] - nums[i - 1])
            ans += 1
    }
    return ans
}