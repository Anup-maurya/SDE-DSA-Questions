// 88. Merge Sorted Array
// You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums3;
      for(int i=0;i<m;i++){
          nums3.push_back(nums1[i]);
    }
      for(int i=0;i<n;i++){
          nums3.push_back(nums2[i]);
    }
        nums1=nums3;
        sort(nums1.begin(),nums1.end());
    }
};