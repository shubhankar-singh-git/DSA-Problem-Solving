#include<vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n= nums.size();

        int start=0, end= n-1, mid;
        while(start <= end){
            int midIndex= start + (end-start)/2;

            if(target == nums[midIndex])
                return midIndex;
            if(target > nums[midIndex])
                start= midIndex+1;
            else
                end= midIndex-1;
        }
        return -1;
    }
};