/*
 * @lc app=leetcode.cn id=102 lang=cpp
 *
 * [102] 二叉树的层序遍历
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        queue<TreeNode*>lists;
        lists.push(root);
        while(!lists.empty()){
            int listSize = lists.size();
            vector<int> arr;
            while(listSize-->0){
                TreeNode* node = lists.front();
                arr.push_back(node->val);
                lists.pop();
                if(node->left){
                    lists.push(node->left);
                }
                if(node->right){
                    lists.push(node->right);
                }
            }
            ans.push_back(arr);
        }
        return ans;
    }
};
// @lc code=end

