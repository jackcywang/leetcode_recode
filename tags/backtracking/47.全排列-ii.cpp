/*
 * @lc app=leetcode.cn id=47 lang=cpp
 *
 * [47] 全排列 II
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> ans;
    vector<int> current;
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        if(nums.size()==0){
            return ans;
        }
        sort(nums.begin(),nums.end());
        vector<bool>boollist(nums.size(),false);
        DFS(nums,current,boollist);
        return ans;
    }
    void DFS(vector<int>& nums,vector<int>current,vector<bool>boollist){
        if(current.size()==nums.size()){
            ans.push_back(current);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(boollist[i]) continue;
            if(i>0 && nums[i]==nums[i-1] && boollist[i-1]) break;
            current.push_back(nums[i]);
            boollist[i] = true;
            DFS(nums,current,boollist);
            current.pop_back();
            boollist[i] = false;
        }
    }
};
// @lc code=end

