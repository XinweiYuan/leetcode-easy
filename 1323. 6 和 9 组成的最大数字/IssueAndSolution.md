# 题目描述
给你一个仅由数字 6 和 9 组成的正整数 num。  
你最多只能翻转一位数字，将 6 变成 9，或者把 9 变成 6 。  
请返回你可以得到的最大数字。  

示例 1：  
输入：num = 9669  
输出：9969  
解释：  
改变第一位数字可以得到 6669 。  
改变第二位数字可以得到 9969 。  
改变第三位数字可以得到 9699 。  
改变第四位数字可以得到 9666 。  
其中最大的数字是 9969 。  

*来源：力扣（LeetCode）*  
*链接：https://leetcode-cn.com/problems/maximum-69-number*

# 题解
从高位开始，将第一个 6 变成 9 即可得到最大值。
1. 使用 to_string() 方法将 num 变成 string，并计算 string 的长度 n
2. 依次遍历 string，将碰到的第一个 6 变成 9，并且 result 自加 (c-'0')*10^(n-1)
3. 返回最后的 result

注：遍历时可以用引用的形式来遍历，最后使用 stoi() 方法将 string 整体变成 int。以此来提高速度。
