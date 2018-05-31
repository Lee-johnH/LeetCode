/*
 * Q:Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.
 *
 * Note:
 *   1.The number of elements initialized in nums1 and nums2 are m and n respectively.
 *   2.You may assume that nums1 has enough space (size that is greater or equal to m + n) to hold additional elements from nums2.
 *
 */
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m == 0 || n == 0) {
            if(m == 0)
                nums1.assign(nums2.begin(), nums2.end());
            return ;

        }

        int i = 0, j = 0, k = 0;
        vector<int> nums3 = nums1;

        while(i < m && j < n) {
            if(nums3[i] <= nums2[j])
                nums1[k++] = nums3[i++];
            else
                nums1[k++] = nums2[j++];

        }

        while(i < m)
            nums1[k++] = nums3[i++];
        while(j < n)
            nums1[k++] = nums2[j++];

    }

};
