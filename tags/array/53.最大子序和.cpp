/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子序和
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      if(nums.size()<=0) return 0;
      int sum=0;
      int maxsum = INT_MIN;
      for(int i=0;i<nums.size();i++){
          if(sum<0){
              sum = nums[i];
          }
          else{
              sum+=nums[i];
          }
          if(sum>maxsum){
              maxsum = sum;
          }
      }
      return maxsum;
    }
};
// @lc code=end

