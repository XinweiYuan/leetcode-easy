# 题目描述
实现函数 ToLowerCase()，该函数接收一个字符串参数 str，并将该字符串中的大写字母转换成小写字母，之后返回新的字符串。  

示例 1：  
输入: "Hello"  
输出: "hello"  

*来源：力扣（LeetCode）*  
*链接：https://leetcode-cn.com/problems/to-lower-case*

# 题解
用引用的形式遍历 str 中的每个元素，如果是大写字母，加 32 即可。最后返回 str
