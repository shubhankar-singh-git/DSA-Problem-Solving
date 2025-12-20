// Problem: 709 - To Lower Case
// Leetcode: https://leetcode.com/problems/to-lower-case/

// Solution Type: String Manipulation
// Approach:
//   - Traverse each character of the string.
//   - If the character lies in the range 'A' to 'Z', convert it to lowercase.
//   - The conversion is done using ASCII arithmetic: lowercase = uppercase - 'A' + 'a'
//   - The string is modified in-place to avoid extra space usage.

// Time Complexity: O(n),  where n is the length of the string.
// Space Complexity: O(1)
