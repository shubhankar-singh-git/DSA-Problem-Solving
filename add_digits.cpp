// Problem: 258 - Add Digits
// Leetcode: https://leetcode.com/problems/add-digits/description/

// Approach: Repeatedly sum digits until a single-digit number is obtained
// Time Complexity: O(log10(num))
// Space Complexity: O(1)


class Solution {
public:
    int addDigits(int num) {
        if(num <= 9)
            return num;

        while(num > 9){
            int finalSum = 0;

            while(num > 0){
                finalSum += (num % 10);
                num /= 10;
            }

            if(finalSum <= 9)
                return finalSum;

            num = finalSum;
        }

        return -1; // Theoretically it will never reach, added just for completeness
    }
};
