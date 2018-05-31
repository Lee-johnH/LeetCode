/*
 * Q: Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
 *
 *    You may assume no duplicates in the array.
 *
 */

#include <vector>
using namespace std;

class Solution {
    public:
        int searchInsert(vector<int>& nums, int target) {
            if(nums.size() == 0)
                return 0;
            int i = 0;
            for(; i < nums.size(); i++) {
                if(nums[i] >= target)
                    return i;

            }

            return i;

        }

};
