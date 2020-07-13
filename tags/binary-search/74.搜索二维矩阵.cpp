/*
 * @lc app=leetcode.cn id=74 lang=cpp
 *
 * [74] 搜索二维矩阵
 */

// @lc code=start
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0 || matrix[0].size()==0) return false;
        int rows = matrix.size()-1;
        int cols = matrix[0].size()-1;
        int row=0,col=0;
        while(row<=rows){
            int midrow = (rows-row)/2+row;
            if (matrix[midrow][0]>target){
                rows = midrow-1;
            }
            else if(matrix[midrow][cols]<target){
                row = midrow+1;
            }
            else{
                while (col<=cols){

                    int midcol = (cols-col)/2+col;
                    if(matrix[midrow][midcol]==target){
                        return true;
                    }
                    else if(matrix[midrow][midcol]>target){
                        cols = midcol-1;
                    }
                    else
                    {
                        col = midcol+1;
                    }  
                }
            }
            
        }
        return false;

    }
};
// @lc code=end

