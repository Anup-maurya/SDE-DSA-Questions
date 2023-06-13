// 287. Find the Duplicate Number
// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int t;
        for(int i=0;i<nums.size()-1;i++){
             if(nums[i]==nums[i+1]){
               t= nums[i];
             }
             
        }
        return t;
    }
};