/*
 * Q: Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
 *
 */

#include <vector>
#include <algorithm>
using namespace std;

/*
 *  思路：当一个数加上整数才会比原来大，所以，遇到正数我们就用当前值加上该正数，遇到负数就不取该值从自身开始重新取
 *        f[i]表示第i个值必取，f[i]-->maxSubArray(0...i)
 *        状态转移方程: f[i] = f[i-1] > 0 ? nums[i] + f[i-1] : nums[i];
 *
 *  nums[i]: [-2, 1, -3, 4, -1, 2, 1, -5, 4]
 *  f[i]: [-2, 1, -2, 4,  3, 5, 6,  1, 5]
 */
class Solution {
    public:
        int maxSubArray(vector<int>& nums) {
            vector<int> f(nums.size());
            f[0] = nums[0];

            for(int i = 1; i < nums.size(); i++) {
                f[i] = f[i-1] > 0 ? nums[i] + f[i-1] : nums[i];
            }

            return *std::max_element(f.begin(), f.end());
        }
};



