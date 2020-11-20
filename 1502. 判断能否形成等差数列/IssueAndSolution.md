# 题目描述
给你一个数字数组 arr 。  
如果一个数列中，任意相邻两项的差总等于同一个常数，那么这个数列就称为 等差数列 。  
如果可以重新排列数组形成等差数列，请返回 true ；否则，返回 false 。  

示例 1：  
输入：arr = [3,5,1]  
输出：true  
解释：对数组重新排序得到 [1,3,5] 或者 [5,3,1] ，任意相邻两项的差分别为 2 或 -2 ，可以形成等差数列。  

*来源：力扣（LeetCode）*  
*链接：https://leetcode-cn.com/problems/can-make-arithmetic-progression-from-sequence*  


# 题解
1. 对 arr 进行排序
2. 记录 arr[1] - arr[0] 的值 tmp
3. 从 i = 2 开始遍历 arr，依次检查 arr[i] - arr[i-1] 是否等于 tmp，不等直接返回 false
4. 最后遍历完，如果没有返回 false，说明是等差数列， 返回 true
