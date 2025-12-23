#include <climits>
class Solution {
public:
    int reverse(int x) {
        int revNum = 0, digit;

        while(x != 0){
            digit = x % 10;

            // Checking for overflow before adding the digit
            if(revNum > INT_MAX / 10 || (revNum == INT_MAX / 10 && digit > 7))
                return 0;
            if(revNum < INT_MIN / 10 || (revNum == INT_MIN / 10 && digit < -8))
                return 0;

            revNum = revNum * 10 + digit;
            x /= 10;
        }

        return revNum;
    }
};
