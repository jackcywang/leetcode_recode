/*
 * @lc app=leetcode.cn id=73 lang=cpp
 *
 * [73] 矩阵置零
 */

// @lc code=start
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<vector<int>> zerolist;
        for(int row=0;row<rows;row++){
            for(int col=0;col<cols;col++){
                if(matrix[row][col]==0){
                    zerolist.push_back({row,col});
                } 

            }
        }
        for(auto zeropoint:zerolist){
            int zerorow=zeropoint[0];
            int zerocol=zeropoint[1];
            for(int i=0;i<rows;i++){
                matrix[i][zerocol] = 0;
            }
            for(int j=0;j<cols;j++){
                matrix[zerorow][j] = 0;
            }
        }   
    }
};
// @lc code=end

