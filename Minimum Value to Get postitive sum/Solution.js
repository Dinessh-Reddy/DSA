let func = function (nums) {
    let ans = 1, pre = 1;
    for (let num in nums) {
        pre += num;
        if (pre < 1) {
            ans += (1 - num)
            pre = 1
        }
    }
    return ans;
}