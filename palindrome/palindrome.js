let check_palindrome = function (s) {
    let i = 0, j = s.length - 1;
    while (i < j) {
        if (s[i] == s[j]) {
            i++;
            j--;
        }
        else {
            return false;
        }
    }
    return true;
}