/*
 * @lc app=leetcode.cn id=4 lang=cpp
 *
 * [4] 寻找两个正序数组的中位数
 */

// @lc code=start
class Solution {
public:
    double singlenum(vector<int> nums,int len1,int len2){
        double result;
        if(len1==0){
            if(len2%2==0){
                result = (nums[len2/2]+nums[len2/2-1])/2;
            }
            else
            {
                result = nums[len2/2-1];
            }
        }
        return result;
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int len1 = nums1.size(),len2 = nums2.size();
        double result;
        
      


    }
};
// @lc code=end

