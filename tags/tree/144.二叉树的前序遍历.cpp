/*
 * @lc app=leetcode.cn id=144 lang=cpp
 *
 * [144] 二叉树的前序遍历
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> ans;
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==NULL) return ans;
        Treetrace(root);
        return ans;
    }
    void Treetrace(TreeNode* root){
        if(root==NULL) return;
        ans.push_back(root->val);
        Treetrace(root->left);
        Treetrace(root->right);
    }
};
// @lc code=end

