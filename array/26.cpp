/*
 * Q: Given a sorted array nums, remove the duplicates in-place such that each element appear only once and return the new length.
 *    Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.
 *
 */

int removeDuplicates(int* nums, int numsSize) {
    int i = 0, j = 1;

    if(numsSize == 0 || numsSize == 1)
        return numsSize;

    while(j != numsSize-1)
    {
        if(nums[i] == nums[j])
            j++;
        else
            nums[++i] = nums[j++];

    }

    if(nums[i] != nums[j])
        nums[++i] = nums[j];

    return i+1;

}
