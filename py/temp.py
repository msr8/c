class Solution:
    def longestPalindrome(self, s: str) -> str:
        is_palindrome = lambda s: s == s[::-1]
        s_len = len(s)
    
        ret = s[0]
        
        for index in range(s_len):
            # Odd length palindromes
            left  = index-1
            right = index+1
            while True:
                # Check that we are not out of bounds
                if left < 0 or right >= s_len: break
                # Extract the substring
                substr = s[left:right+1]
                # Check if it is a palindrome
                if is_palindrome(substr):
                    if len(substr) > len(ret): ret = substr
                else: break
                # Move the pointers
                left  -= 1
                right += 1
            
            # Even length palindromes
            left  = index
            right = index+1
            while True:
                # Check that we are not out of bounds
                if left < 0 or right >= s_len: break
                # Extract the substring
                substr = s[left:right+1]
                # Check if it is a palindrome
                if is_palindrome(substr):
                    if len(substr) > len(ret): ret = substr
                else: break
                # Move the pointers
                left  -= 1
                right += 1

        
        return ret


'''
My approach is to assume that each letter is the center of a palindrome, and the keep expanding the palindrome until it is no longer a palindrome. I do this for both odd and even length palindromes
'''