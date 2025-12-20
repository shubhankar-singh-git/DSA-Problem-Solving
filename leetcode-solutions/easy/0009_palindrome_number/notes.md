// Problem: 9 - Palindrome Number
// Leetcode: https://leetcode.com/problems/palindrome-number/

// Solution Type: Math / Two-Pointer (Half Reversal)
// Approach:
//   - Negative numbers are not palindromes.
//   - Numbers ending with 0 cannot be palindromes except 0.
//   - Reverse only the second half of the number to avoid overflow
//   - Stop when the reversed half becomes greater than or equal to the remaining half i.e. (revHalf >= x)

// Time Complexity: O(log₁₀ n)
// Space Complexity: O(1)
