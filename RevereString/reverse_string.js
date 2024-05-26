let reverse_string = function (s) {
    let i= 0, j = s.length - 1;
    while (i < j) {
        let temp = s[i]
        s[i] = s[j]
        s[j] = temp
        i += 1
        j -= 1
    }
    return s
}

console.log(reverse_string([1,2,3,4,5]))