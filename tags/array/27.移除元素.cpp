/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        if(n==0) return n;
        int j=0;
        for(int i=0; i<n;i++){
            if(nums[i]!=val){
                nums[j++] = nums[i];
            }
        }
        return j;
    }
};
// @lc code=end

