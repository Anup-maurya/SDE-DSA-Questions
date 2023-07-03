// 53. Maximum Subarray
// Given an integer array nums, find the subarray with the largest sum, and return its sum.

class Solution {
 public:
  int maxSubArray(vector<int>& nums) {
    int ans = nums[0];
    int sum = 0;

    for ( int num : nums) {
      sum = max(num, sum + num);
      ans = max(ans, sum);
    }

    return ans;
  }
};
