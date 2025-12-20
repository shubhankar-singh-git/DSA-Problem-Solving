class Solution {
public:
    int findComplement(int num) {
        
        unsigned int mask = 1;   // Prevents from overflow and becomes negative value of mask while performing left shift operation 
        
        while (mask <= (unsigned int)num)
            mask <<= 1;
        
        mask -= 1;               // Creates a mask with all bits set to 1
        return mask ^ num;       // XOR with mask gives the complement
    }
};
