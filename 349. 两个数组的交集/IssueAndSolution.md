# 题目描述
给定两个数组，编写一个函数来计算它们的交集。  

示例 1：  
输入：nums1 = [1,2,2,1], nums2 = [2,2]  
输出：[2]  
示例 2：  
输入：nums1 = [4,9,5], nums2 = [9,4,9,8,4]  
输出：[9,4]  

*来源：力扣（LeetCode）*  
*链接：https://leetcode-cn.com/problems/intersection-of-two-arrays*  


# 题解
使用两个 set 来保存 arr1 arr2 中的数字, 遍历任意 set 中的元素，如果在另一个 set 中能找到，就将这个数保存到结果数组。  
返回结果数组
