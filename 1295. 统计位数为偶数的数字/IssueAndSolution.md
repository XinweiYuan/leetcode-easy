# 题目描述
给你一个整数数组 nums，请你返回其中位数为 偶数 的数字的个数。  

示例 1：  
输入：nums = [12,345,2,6,7896]  
输出：2  
解释：  
12 是 2 位数字（位数为偶数）   
345 是 3 位数字（位数为奇数）    
2 是 1 位数字（位数为奇数）   
6 是 1 位数字 位数为奇数）   
7896 是 4 位数字（位数为偶数）    
因此只有 12 和 7896 是位数为偶数的数字  

示例 2：  
输入：nums = [555,901,482,1771]  
输出：1   
解释：   
只有 1771 是位数为偶数的数字。  

*来源：力扣（LeetCode）*  
*链接：https://leetcode-cn.com/problems/find-numbers-with-even-number-of-digits*  


# 题解
依次访问 nums 中的数字，对每个数字 num， 每次除 10，位数加 1，直到 num 被除为 0.
