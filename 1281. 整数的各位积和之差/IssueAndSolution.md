# 题目描述
给你一个整数 n，请你帮忙计算并返回该整数「各位数字之积」与「各位数字之和」的差。  
 
示例 1：  
输入：n = 234  
输出：15   
解释：   
各位数之积 = 2 * 3 * 4 = 24   
各位数之和 = 2 + 3 + 4 = 9   
结果 = 24 - 9 = 15  

*来源：力扣（LeetCode）*  
*链接：https://leetcode-cn.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer*  

# 题解
n 对 10 取余数然后在自除 10 直到 n 等于 0，可以得到 n 的每一位数，分别定义一个表示各位数乘积和以及相加和的变量，进行各自的操作，最后相减即可。  
注意： 乘积和的变量初始化为 1，相加和的变量初始化为 0.
