/*
 * @lc app=leetcode.cn id=46 lang=cpp
 *
 * [46] 全排列
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> ans;
    vector<int> current;
    vector<vector<int>> permute(vector<int>& nums) {
        if(nums.size()==0) return ans;
        vector<bool>boolist(nums.size(),true);
        DFS(nums,current,boolist);
        return ans;
    }
    void DFS(vector<int>&nums,vector<int>&current,vector<bool>& boolist){
        if(current.size()==nums.size()){
            ans.push_back(current);
            return;
        }
        for(int i=0;i<nums.size();++i){
            if(boolist[i]){
                current.push_back(nums[i]);
                boolist[i] = false;
                DFS(nums,current,boolist);
                boolist[i] = true;
                current.pop_back();
            }
        }
    }
};
// @lc code=end

