// Problem: 258 - Add Digits
// Leetcode: https://leetcode.com/problems/add-digits/

// Solution Type: Math / Digital Root
// Approach: Used the 'Digital Root' concept.
//           If the number is 0, return 0.
//           If the number is divisible by 9, the result is 9.
//           Otherwise, the result is num % 9.
// Time Complexity: O(1)
// Space Complexity: O(1)

class Solution {
public:
    int addDigits(int num) {
        if (num == 0)
            return 0;

        if (num % 9 == 0)
            return 9;

        return num % 9;
    }
};
