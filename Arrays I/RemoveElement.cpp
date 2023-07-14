//27. Remove Element
//Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for (auto i = nums.begin(); i!=nums.end();++i) {
        if (*i == val) {
            nums.erase(i);
            i--;
        }
    }
    int count=0;
        for(int i:nums){
            count++;
        }
        return count;
    }
};
