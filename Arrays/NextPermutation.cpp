// 31. Next Permutation
// A permutation of an array of integers is an arrangement of its members into a sequence or linear order.

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index = -1,n = nums.size();
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                index = i;
                break;
            }
        }
        for(int i=n-1;i>index and index!=-1;i--){
            if(nums[i]>nums[index]){
                swap(nums[i],nums[index]);
                break;
            }
        }
        reverse(nums.begin()+index+1,nums.end());
    }
};