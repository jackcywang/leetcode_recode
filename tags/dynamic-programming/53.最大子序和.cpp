/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子序和
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        int max_ending_here = nums[0];
        int max_sofar = nums[0];
        for(int i=1;i<nums.size();i++){
            max_ending_here = max(nums[i],max_ending_here+nums[i]);
            max_sofar = max(max_sofar,max_ending_here);
        }
        return max_sofar;
    }
};
// @lc code=end

