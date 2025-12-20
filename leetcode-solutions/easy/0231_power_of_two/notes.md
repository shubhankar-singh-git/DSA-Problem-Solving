// Problem: 231 - Power of Two

// Leetcode: https://leetcode.com/problems/power-of-two/


// Solution Type: Bit Manipulation

// Approach: A power of two(n) has exactly one set bit(1) in its binary representation.

//           And every number which is one less than power of two(n-1) will have all bits as 1 

//               and 1 bit less than that number which is power of 2(n).

//           So, on taking 'AND' of n and (n-1) will result 0.


// Time Complexity: O(1)

// Space Complexity: O(1)
