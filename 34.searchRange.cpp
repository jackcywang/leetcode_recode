/*** 
 * @Author: jackcywang
 * @Date: 2020-06-09 17:25:17
 * @LastEditTime: 2020-06-09 17:40:20
 * @LastEditors: jackcywang
 * @tag: 数组,二分查找
 * @FilePath: \leetcode\leetcode_Hot100\34.searchRange.cpp
 */

/*
题目:
给定一个按照升序排列的整数数组 nums，和一个目标值 target。找出给定目标值在数组中的开始位置和结束位置。
你的算法时间复杂度必须是 O(log n) 级别。如果数组中不存在目标值，返回 [-1, -1]。
示例1:
输入: nums = [5,7,7,8,8,10], target = 8
输出: [3,4]
示例2:
输入: nums = [5,7,7,8,8,10], target = 6
输出: [-1,-1]

思路:
二分查找;
解法推荐https://leetcode-cn.com/problems/find-first-and-last-position-of-element-in-sorted-array/solution/er-fen-cha-zhao-suan-fa-xi-jie-xiang-jie-by-labula/
*/

#include <iostream>
#include <cstring>
#include <stack>
#include <vector>

using namespace std;


int left_bound(vector<int>nums, int target) {

    int left = 0, right = nums.size() - 1;
    // 搜索区间为 [left, right]
    while (left <= right) {
        int mid = left + (right - left) >> 1;
        if (nums[mid] < target) {
            // 搜索区间变为 [mid+1, right]
            left = mid + 1;
        } else if (nums[mid] > target) {
            // 搜索区间变为 [left, mid-1]
            right = mid - 1;
        } else if (nums[mid] == target) {
            // 收缩右侧边界
            right = mid - 1;
        }
    }
    // 检查出界情况
    if (left >= nums.size() || nums[left] != target)
        return -1;
    return left;
}


int right_bound(vector<int>& nums,int target){
    int left = 0;
    int right = nums.size()-1;
    while(left<=right){
        int mid = left + (right-left)>>1;
        if(nums[mid]==target){
            left  = mid+1; //不返回,缩小边界
        }
        else if(nums[mid]>target){
            right = mid-1;
        }
        else if(nums[mid]<target){
            left = mid+1;
        }
    }
    if(right<0 || nums[right]!=target){
        return -1;
    }
    return right;
    
}

vector<int> searchRange(vector<int>& nums, int target) {
    if(nums.size()==0){
        return vector<int>({-1,-1});
    }
    int left = left_bound(nums,target);
    int right = right_bound(nums,target);
    return vector<int>({left,right});

    
}
int main()
{
    vector<int>nums = {5,6,7,8,6,10,9};
    int target = 6;
    vector<int> res = searchRange(nums,target);
    for(int i=0;i<res.size();++i){
        cout<<res[i];
    }
    return 0;
}

/*输出
1,4
*/

