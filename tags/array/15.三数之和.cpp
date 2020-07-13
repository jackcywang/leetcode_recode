/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>res;
        if(nums.size()==0 || nums.size()<3) return res;
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size();i++){
            if(nums[i]>0){
                return res;
            }
            if(i>0 && nums[i]==nums[i-1]) continue;
            int L= i+1;
            int R= nums.size()-1;
            while(L<R){
                if(nums[i]+nums[L]+nums[R]==0){
                    res.push_back({nums[i],nums[L],nums[R]});
                    while(L<R && nums[L]==nums[L+1]){
                        L++;
                    }
                    while(L<R && nums[R]==nums[R-1]){
                        R--;
                    }
                    L++;
                    R--;
                }
                else if (nums[i]+nums[L]+nums[R]>0)
                {
                    R--;
                }
                else{
                    L++;
                }  
            }
        }
        return res;

    }
};
// @lc code=end

