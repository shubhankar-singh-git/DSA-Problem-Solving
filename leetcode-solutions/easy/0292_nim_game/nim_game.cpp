class Solution {
public:
    bool canWinNim(int n) {
        // If the number of stones(n) is a multiple of 4 then only I'll lose if we both play optimally
        if(n%4 == 0)
            return false;
        else
            return true;
    }
};