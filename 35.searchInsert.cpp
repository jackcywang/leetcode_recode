/*** 
 * @Author: jackcywang
 * @Date: 2020-06-09 18:06:59
 * @LastEditTime: 2020-06-11 15:31:45
 * @LastEditors: jackcywang
 * @tag: 数组,二分查找
 * @FilePath: \leetcode\leetcode_Hot100\35.searchInsert.cpp
 */


/*
题目:搜索插入位置
给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。

思路:
二分查找,不断缩一半的范围,每次使用中间的数与target比较,小于target,right指针减一,大于target,left指针加一,直至left>right;
若找到直接返回mid,若没找到,返回left;如nums=[1,2,3,4],target=0,迭代后right=-1,循环结束后left+1=right=-1,left=0,正确;
target=5时,循环结束前left=mid+1=4;循环结束后left人等与4,正确。
*/

#include <iostream>
#include <cstring>
#include <stack>
#include <vector>
#include <queue>

using namespace std;


int searchInsert(vector<int>& nums, int target) {
    if(nums.size()==0){
        return 0;
    }
    int left =0;
    int right=nums.size()-1;
    while(left<=right){
        int mid = left+(right-left)/2;
        if(nums[mid]<target){
            left = mid+1;
        }
        else if(nums[mid]>target){
            right = mid -1;
        }
        else{
            return mid;
        }
    }
    return left;
    
}

int main()
{
    vector<int>s = {1,4,5,6,8};
    int target = 3;
    int index = searchInsert(s,target);
    cout<<index;
    queue<int> q;
    return 0;
}

/*输出
1
*/