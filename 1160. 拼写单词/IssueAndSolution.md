# 题目描述
给你一份『词汇表』（字符串数组） words 和一张『字母表』（字符串） chars。  
假如你可以用 chars 中的『字母』（字符）拼写出 words 中的某个『单词』（字符串），那么我们就认为你掌握了这个单词。  
注意：每次拼写（指拼写词汇表中的一个单词）时，chars 中的每个字母都只能用一次。  
返回词汇表 words 中你掌握的所有单词的 长度之和。  

示例 1：  
输入：words = ["cat","bt","hat","tree"], chars = "atach"  
输出：6  
解释：   
可以形成字符串 "cat" 和 "hat"，所以答案是 3 + 3 = 6。  

*来源：力扣（LeetCode）  
链接：https://leetcode-cn.com/problems/find-words-that-can-be-formed-by-characters* 


# 题解
1. 遍历 words 中的单词，遍历之初利用哈希表保存 chars 中每个字母的个数  
2. 遍历单词中的字母，如果字母种类和个数都能在哈希表中匹配，就将此单词的长度加到返回结果中
3. 返回最终结果
