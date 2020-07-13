/*
 * @lc app=leetcode.cn id=96 lang=cpp
 *
 * [96] 不同的二叉搜索树
 */

// @lc code=start
class Solution {
public:
    int numTrees(int n) {
        vector<int> nums(n+1);
        nums[0]=1;
        nums[1]=1;
        for(int i=2;i<=n;i++){
            for(int j=1;j<=i;j++){
                nums[i]+=nums[j-1]*nums[i-j];
            }
        }
        return nums[n];


    }
};
// @lc code=end

