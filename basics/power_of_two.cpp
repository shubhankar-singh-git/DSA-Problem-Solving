// Problem: 231 - Power of Two
// Leetcode: https://leetcode.com/problems/power-of-two/description/

// Approach: Keep dividing the number by 2 until it becomes 1 or cannot be divided
// Time Complexity: O(log2(n)) - number of times n can be divided by 2
// Space Complexity: O(1)

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0)
            return false;

        while(n % 2 == 0){
            n /= 2;
        }

        return n == 1;
    }
};
