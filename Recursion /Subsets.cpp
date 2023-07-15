// 78. Subsets
// Given an integer array nums of unique elements, return all possible subsets (the power set).

class Solution {
public:
    void subsetCal(vector<int>& nums, vector<vector<int>>& result, vector<int>& subset, int index) {
        result.push_back(subset);

        for(int i = index; i < nums.size(); i++){
            subset.push_back(nums[i]);

            subsetCal(nums, result, subset, i + 1);

            subset.pop_back();
        }
        return;
    }

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> subset;
        vector<vector<int>> result;

        subsetCal(nums, result, subset, 0);

        return result;
    }
};
