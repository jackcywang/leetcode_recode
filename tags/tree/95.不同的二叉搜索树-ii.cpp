/*
 * @lc app=leetcode.cn id=95 lang=cpp
 *
 * [95] 不同的二叉搜索树 II
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<TreeNode*> generateTrees(int n) {
        if(n==0) return {};
        return helper(1,n); 
    }
    vector<TreeNode*>helper(int left,int right){
        vector<TreeNode*> ans;
        if(left>right){
            ans.push_back(nullptr);
        }
        for(int i=left;i<=right;i++){
            vector<TreeNode*> leftnodes = helper(left,i-1);
            vector<TreeNode*> rightnodes = helper(i+1,right);
            for(auto leftnode:leftnodes){
                for(auto rightnode: rightnodes){
                    TreeNode* root = new TreeNode(i);
                    root->left = leftnode;
                    root->right = rightnode;
                    ans.push_back(root);
                }
            }

        }
        return ans;
    }
};
// @lc code=end

