/*
 * @lc app=leetcode.cn id=145 lang=cpp
 *
 * [145] 二叉树的后序遍历
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
    vector<int> postorderTraversal(TreeNode* root) {
        if(root==NULL) return ans;
        Treetrace(root);
        return ans;
    }
    void Treetrace(TreeNode* root){
        if(root==NULL) return;
        Treetrace(root->left);
        Treetrace(root->right);
        ans.push_back(root->val);
    }
};
// @lc code=end

