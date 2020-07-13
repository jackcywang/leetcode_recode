/*
 * @lc app=leetcode.cn id=103 lang=cpp
 *
 * [103] 二叉树的锯齿形层次遍历
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL) return ans;
        queue<TreeNode*>lists;
        lists.push(root);
        int count=1;
        while(!lists.empty()){
            int listSize = lists.size();
            vector<int> arr;
            while(listSize-->0){
                TreeNode* node = lists.front();
                arr.push_back(node->val);
                lists.pop();
                if(node->left) lists.push(node->left);
                if(node->right) lists.push(node->right);
            }
            ans.push_back(arr);
        }

        for(int i=0;i<ans.size();i++){
            if(i%2==1){
                int l=0,r=ans[i].size()-1;
                while(l<r){
                    swap(ans[i][l],ans[i][r]);
                    l++;
                    r--;
                }
            }
        }
        return ans;
    }
};
// @lc code=end

