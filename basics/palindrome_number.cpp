// Problem: 9 - Palindrome Number
// Leetcode: https://leetcode.com/problems/palindrome-number/

// Solution Type: Mathematical / Iterative
// Approach: Reverse the integer and compare it with the original value.
// Time Complexity: O(log₁₀(x))
// Space Complexity: O(1)

#include <climits>
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;

        int original = x;
        int reversed = 0;

        while (x != 0) {
            if (reversed > INT_MAX / 10) 
                return false;

            reversed = (reversed * 10) + (x % 10);
            x /= 10;
        }

        return original == reversed;
    }
};
