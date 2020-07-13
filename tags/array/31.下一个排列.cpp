/*
 * @lc app=leetcode.cn id=31 lang=cpp
 *
 * [31] 下一个排列
 */

// @lc code=start
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size()<2) return;
        int R = nums.size()-1;
        while(R>=1){
            if(nums[R]>nums[R-1]){
                break;
            }
            R--;
        }
        if(R==0){
            sort(nums.begin(),nums.end());
            return;
        }
        int exchange = R;
        for(int i=nums.size()-1;i>=exchange;i--){
            if(nums[i]>nums[R-1]){
                swap(nums[i],nums[R-1]);
                break;
            }
        }
        int l=exchange,r=nums.size()-1;
        while(l<r){
            swap(nums[l],nums[r]);
            l++;
            r--;
        }
        return;
    }
};
// @lc code=end

