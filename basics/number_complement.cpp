// Problem: 476 - Number Complement
// Leetcode: https://leetcode.com/problems/number-complement/

// Solution Type: Bit Manipulation / Simulation
// Approach: Convert the number to binary, flip each bit to form its complement,
//           then convert the resulting binary string back to an integer.
// Time Complexity: O(log₂(n))
// Space Complexity: O(log₂(n))


#include <string>
using std::string;

class Solution {
public:
    int findComplement(int num) {
        if (num < 0)
            return -1;

        if (num == 0)
            return 1;

        string complement = "";
        int bit;

        while (num > 0) {
            bit = num % 2;
            //It directly converts the binary to it's complement
            complement = char('0' + (bit == 0 ? 1 : 0)) + complement;
            num /= 2;
        }

        int result = 0;
        for (char c : complement) {
            result = result * 2 + (c - '0');
        }

        return result;
    }
};
