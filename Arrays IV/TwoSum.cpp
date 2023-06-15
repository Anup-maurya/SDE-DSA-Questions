// 1 Two Sum
//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int, int> mpp;
        for(int j=0;j<nums.size();j++){
            if(mpp.find(target-nums[j]) != mpp.end()){
                ans.push_back(mpp[target-nums[j]]);
                ans.push_back(j);
                return ans;
            }
            mpp[nums[j]]=j;
        }
        return ans;
    }
};
