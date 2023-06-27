// 496. Next Greater Element I
// The next greater element of some element x in an array is the first greater element that is to the right of x in the same array.

class Solution {
 public:
  vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    vector<int> ans;
    unordered_map<int, int> numToNextGreater;
    stack<int> stack;  // decreasing stack

    for (const int num : nums2) {
      while (!stack.empty() && stack.top() < num)
        numToNextGreater[stack.top()] = num, stack.pop();
      stack.push(num);
    }

    for (const int num : nums1)
      if (const auto it = numToNextGreater.find(num);
          it != numToNextGreater.cend())
        ans.push_back(it->second);
      else
        ans.push_back(-1);

    return ans;
  }
};

