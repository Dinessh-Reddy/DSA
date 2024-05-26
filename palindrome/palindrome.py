class Solution:

    def palindrome_rev_string(self, s:str)->bool:
        """
        This function returns true if the string is a palindrome using string reversing.
        """
        return s == s[::-1]
    

    def is_palindrome(seld, s:str)->bool:
        """
        This function uses Two pointer technique to find if a string is palindrome or not.
        """
        i,j = 0, len(s) - 1
        while i < j:
            if s[i] == s[j]:
                i, j = i + 1, j - 1
            else:
                return False
        return True