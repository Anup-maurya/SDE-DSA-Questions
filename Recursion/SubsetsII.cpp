// 90. Subsets II
// Given an integer array nums that may contain duplicates, return all possible subsets (the power set).
// The solution set must not contain duplicate subsets. Return the solution in any order.

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {        
        set<multiset<int>> st;        
        vector<vector<int>> res;        
        multiset<int> s;        
        dfs(st,s, nums, 0);        
        for(auto x: st){
            res.push_back(vector<int> (x.begin(),x.end()));
        }        
        return res;
    }
    
    void dfs(set<multiset<int>>& st, multiset<int> s, vector<int> nums, int i){
        
        st.insert(s);
        if(i>=nums.size())
            return;        
        dfs(st,s,nums,i+1);
        s.insert(nums[i]);
        dfs(st,s,nums,i+1);
        
        
    }
};
