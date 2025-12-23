class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || (x%10==0 && x!=0))
            return false;

        int revHalf= 0;
        while(revHalf < x){
            revHalf= (revHalf*10) + (x%10);
            x/=10;
        }

        return (revHalf == x) || (revHalf/10 == x); // (revHalf/10 == x) removes middle digit for odd length number
    }
};
