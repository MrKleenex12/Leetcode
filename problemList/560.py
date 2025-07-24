'''
  Leetcode 560 - https://leetcode.com/problems/subarray-sum-equals-k/

  This script provides a function to solve the "Subarray Sum Equals K" problem.
  Given an array of integers and an integer k, the function counts the number of
  continuous subarrays whose sum equals to k.

  Usage:
    Call subarraySum(nums, k) where nums is a list of integers and k is the target sum.
'''

from collections import defaultdict

def subarraySum(self, nums, k):
    curr_sum = 0
    count = 0
    # Dictionary
    sums = defaultdict(int)
    sums[0] = 1

    for x in nums:
      curr_sum += x
      count += sums[curr_sum - k]
      sums[curr_sum] += 1
    
    return count