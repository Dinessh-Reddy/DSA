let squares_of_sorted_array = function (nums) {
    let i = 0, j = nums.length - 1, k = nums.length - 1
    let temp = []
    while (i < j) {
        if (abs(nums[i]) > abs(nums[j])) {
            temp.push(pow(nums[i], 2))
            i += 1
        } else {
            temp.push(pow(nums[j], 2))
            j -= 1
        }
    } 
}