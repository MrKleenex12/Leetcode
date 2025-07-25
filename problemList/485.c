/*
 * File: 485.c
 * -----------------------------
 * LeetCode 485: Max Consecutive Ones
 * https://leetcode.com/problems/max-consecutive-ones/
 *
 * Description:
 *   Given a binary array nums, return the maximum number of consecutive 1's in the array.
 *
 */

int findMaxConsecutiveOnes(int* nums, int numsSize) {
  int max_len = 0;
  int one_len = 0;

  for(int i = 0; i < numsSize; i++) {
    if(nums[i] == 0) {
      if(one_len > max_len) max_len = one_len;
      one_len = 0;
    } else {
      one_len++;
    }
  }

  return (max_len > one_len) ? max_len : one_len;
}