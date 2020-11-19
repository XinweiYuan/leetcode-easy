# 题目描述
给你一个整数数组 arr，请你帮忙统计数组中每个数的出现次数。  
如果每个数的出现次数都是独一无二的，就返回 true；否则返回 false。  

示例 1：  
输入：arr = [1,2,2,1,1,3]  
输出：true  
解释：在该数组中，1 出现了 3 次，2 出现了 2 次，3 只出现了 1 次。没有两个数的出现次数相同。  

*来源：力扣（LeetCode）*  
*链接：https://leetcode-cn.com/problems/unique-number-of-occurrences*  


# 题解
使用两个哈希表来求解。  
1. 遍历 arr 中每个元素，map1 保存元素和出现的个数
2. 遍历 map1，用 map2 保存 map1.first 和出现个数
3. 遍历 map2，如果有元素的 second 不为 1，则返回 false
4. 如果顺利地遍历完成，返回 true  
