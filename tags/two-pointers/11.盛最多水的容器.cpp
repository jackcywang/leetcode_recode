/*
 * @lc app=leetcode.cn id=11 lang=cpp
 *
 * [11] 盛最多水的容器
 */

// @lc code=start
class Solution {
public:
    int maxArea(vector<int>& height) {
        int L = 0, R = height.size()-1;
        int Max = min(height[L],height[R])*(R-L);
        int temp;
        while (L<R)
        {
            if(height[L]<height[R]){
                temp = height[L]*(R-L);
                L++;
            }
            else
            {
                temp = height[R]*(R-L);
                R--;
            }
            if(temp>Max){
                Max = temp;
            }
            
        }
        return Max;
        
    }
};
// @lc code=end

