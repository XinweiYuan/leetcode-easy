# 题目描述
给你一个正整数的数组 A。    
然后计算 S，使其等于数组 A 当中最小的那个元素各个数位上数字之和。  
最后，假如 S 所得计算结果是 奇数 的请你返回 0，否则请返回 1。  

示例 1:  
输入：[34,23,1,24,75,33,54,8]  
输出：0  
解释：  
最小元素为 1，该元素各个数位上的数字之和 S = 1，是奇数所以答案为 0。  

*来源：力扣（LeetCode）*   
*链接：https://leetcode-cn.com/problems/sum-of-digits-in-the-minimum-number*  

# 题解
1. 遍历 A 找到最小的数 minNum
2. 计算 minNum 各位数字之和
3. 判断和数的奇偶并返回相应的值
