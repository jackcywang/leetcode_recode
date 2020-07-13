/*
 * @lc app=leetcode.cn id=101 lang=cpp
 *
 * [101] 对称二叉树
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
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr) return true;
        return isEqual(root,root);
    }
    bool isEqual(TreeNode* root1,TreeNode* root2){
        if(root1==nullptr && root2==nullptr) return true;
        if(root1==nullptr || root2==nullptr || root1->val!=root2->val) return false;
        return isEqual(root1->left,root2->right)&& isEqual(root1->right,root2->left);

    }
};
// @lc code=end

