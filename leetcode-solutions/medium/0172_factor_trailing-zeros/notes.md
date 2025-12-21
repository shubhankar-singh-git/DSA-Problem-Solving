// Problem: 172 - Factorial Trailing Zeroes

// Leetcode: https://leetcode.com/problems/factorial-trailing-zeroes/

// Solution Type: Mathematical / Number Theory

// Approach:

//   - Trailing zeroes in n! are produced by factors of 10.

//   - Since 10 = 2 × 5, and factorials contain plenty of 2s,

//     the number of trailing zeroes depends on the count of factor 5s.

//   - Count how many multiples of 5, 25, 125, ... are ≤ n.

//   - Each division by 5 gives the number of extra factors of 5 contributed.


// Explanation:

//   - n/5   → numbers contributing at least one factor of 5

//   - n/25  → numbers contributing an extra factor of 5

//   - n/125 → numbers contributing yet another factor of 5

//   - Continue until n becomes 0


// Time Complexity: O(log₅ n)

// Space Complexity: O(1)

