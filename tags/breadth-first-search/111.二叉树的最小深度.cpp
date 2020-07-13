/*
 * @lc app=leetcode.cn id=111 lang=cpp
 *
 * [111] 二叉树的最小深度
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
    int minDepth(TreeNode* root) {
        if(root==NULL) return 0;
        queue<TreeNode*> lists;
        lists.push(root);
        int res=1;
        while (!lists.empty())
        {
            int listSize = lists.size();
            while (listSize-->0)
            {
                TreeNode* node = lists.front();
                lists.pop();
                if(node->left==NULL&&node->right==NULL) return res;
                if(node->left) lists.push(node->left);
                if(node->right) lists.push(node->right);
            }
            res++;
            
        }
        return res;
        

    }
};
// @lc code=end

