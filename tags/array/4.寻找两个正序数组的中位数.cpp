/*
 * @lc app=leetcode.cn id=4 lang=cpp
 *
 * [4] 寻找两个正序数组的中位数
 */

// @lc code=start
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int len1 = nums1.size(),len2 = nums2.size();
        if(len1==0){
            if(len2==1) return nums2[0];
            else{
                if(len2%2==1) return nums2[len2/2];
                else{
                    return (nums2[len2/2]+nums2[len2/2-1]);
                }
            }
        }
        if(len2==0){
            if(len1==1) return nums1[0];
            else{
                if(len1%2==1) return nums1[len1/2];
                else{
                    return (nums1[len1/2]+nums1[len1/2-1]);
                }
            }
        }
        

    }
};
// @lc code=end

