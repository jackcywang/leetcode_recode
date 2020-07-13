/*
 * @lc app=leetcode.cn id=94 lang=cpp
 *
 * [94] 二叉树的中序遍历
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
    vector<int> inorderTraversal(TreeNode* root) {
        if(root==nullptr) return ans;
        treetrace(root);
        return ans;

    }
    void treetrace(TreeNode* root){
        if(root==nullptr) return;
        treetrace(root->left);
        ans.push_back(root->val);
        treetrace(root->right);
     }
};
// @lc code=end

