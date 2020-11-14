# 题目描述
给你一个字符串 S，返回只含 单一字母 的子串个数。  

示例 1：  
输入： "aaaba"  
输出： 8  
解释：   
只含单一字母的子串分别是 "aaa"， "aa"， "a"， "b"。  
"aaa" 出现 1 次。  
"aa" 出现 2 次。  
"a" 出现 4 次。  
"b" 出现 1 次。  
所以答案是 1 + 2 + 4 + 1 = 8。  

示例 2:  
输入： "aaaaaaaaaa"  
输出： 55  

*来源：力扣（LeetCode）*  
*链接：https://leetcode-cn.com/problems/count-substrings-with-only-one-distinct-letter*  


# 题解
将字符串以连续的字符分隔开并统计每个含有相同字符的子字符串元素个数 count，计算 count*(count+1)/2 将所有的计算结果加起来即可。
