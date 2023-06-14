// 169. Majority Element
// Given an array nums of size n, return the majority element.

class Solution {
 public:
  int majorityElement(vector<int>& nums) {
    int ans;
    int count = 0;

    for (const int num : nums) {
      if (count == 0)
        ans = num;
      count += num == ans ? 1 : -1;
    }

    return ans;
  }
};
