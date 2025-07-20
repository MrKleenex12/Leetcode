/*
LeetCode Problem - https://leetcode.com/problems/minimum-size-subarray-sum/submissions/1704155437/

Sliding Window Technique

Only two things to keep track of:
    - subarray window with start and end
    - total sum of the array and min_length
*/

int minSubArrayLen(int target, int* nums, int numsSize) {
    int start = 0, sum = 0, length = 0;
    int min_length = numsSize + 1;

    for (int end = 0; end < numsSize; end++) {
        sum += nums[end];

        while (sum >= target) {
            length = end - start + 1;
            if (length < min_length)
                min_length = length;
            sum -= nums[start++];
        }
    }

    return (min_length <= numsSize) ? min_length : 0;
}