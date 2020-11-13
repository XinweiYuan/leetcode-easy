# 题目描述
给出三个均为 严格递增排列 的整数数组 arr1，arr2 和 arr3。  
返回一个由 仅 在这三个数组中 同时出现 的整数所构成的有序数组。  

示例：  
输入: arr1 = [1,2,3,4,5], arr2 = [1,2,5,7,9], arr3 = [1,3,4,5,8]  
输出: [1,5]  
解释: 只有 1 和 5 同时在这三个数组中出现.  

*来源：力扣（LeetCode）*  
*链接：https://leetcode-cn.com/problems/intersection-of-three-sorted-arrays*  

# 题解
本题可以用 map 来保存三个数组中出现元素的个数， map 的 key 为各数组元素， value 为出现次数。由题意得，统计结束后 map 中 value 为 3 的 key 就是公共元素。
