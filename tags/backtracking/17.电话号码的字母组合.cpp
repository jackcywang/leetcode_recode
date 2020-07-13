/*
 * @lc app=leetcode.cn id=17 lang=cpp
 *
 * [17] 电话号码的字母组合
 */

// @lc code=start
class Solution {
public:
    void backtrace(string digits){
        int size = digits.size();
        for(int i=0;i<size();i++){
            
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.size()==0) return ans;
        return backtrace(digits);

    }
};
// @lc code=end

