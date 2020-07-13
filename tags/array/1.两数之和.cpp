/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> myhash;
        for(int i=0; i<nums.size(); i++){
            myhash[nums[i]] = i;
        }
        for(int i=0; i<nums.size();i++){
            if(myhash[target-nums[i]] && (myhash[target-nums[i]])!=i){
                return {i,myhash[target-nums[i]]};
            }
        }
        return {};
    }
};
// @lc code=end

