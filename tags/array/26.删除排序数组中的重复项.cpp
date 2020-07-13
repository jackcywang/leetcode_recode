/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除排序数组中的重复项
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        int j=0;
        for(int i=1; i<n;i++){
            if(nums[i]!=nums[j]){
                nums[++j] = nums[i]; 
            }
        }
        return ++j;

    }
};
// @lc code=end

