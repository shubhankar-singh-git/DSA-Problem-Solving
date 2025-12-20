// Problem: 69 - Sqrt(x)

// Leetcode: https://leetcode.com/problems/sqrtx/


// Solution Type: Binary Search

// Approach:

//   - The square root of x lies in the range [1, x/2] for x > 1.

//   - Use binary search to find the largest integer `mid` such that mid * mid <= x.

//   - To avoid integer overflow, compare mid <= x / mid instead of mid * mid <= x.


// Time Complexity: O(log x)

// Space Complexity: O(1)
