# 题目描述
假设存在一个 k 位数 N，其每一位上的数字的 k 次幂的总和也是 N，那么这个数是阿姆斯特朗数。  
给你一个正整数 N，让你来判定他是否是阿姆斯特朗数，是则返回 true，不是则返回 false。  

示例 1：  
输入：153  
输出：true  
153 是一个 3 位数，且 153 = 1^3 + 5^3 + 3^3。  

*来源：力扣（LeetCode）*
*链接：https://leetcode-cn.com/problems/armstrong-number*  


# 题解
1. 统计 N 的位数 k
2. 计算每一位的 k 次方，并相加
3. 判断和是否与 N 一致，返回 true 或 false
