# 题目描述
给定一个字符串，你需要反转字符串中每个单词的字符顺序，同时仍保留空格和单词的初始顺序。  

示例：  
输入："Let's take LeetCode contest"  
输出："s'teL ekat edoCteeL tsetnoc"  

*来源：力扣（LeetCode）*   
*链接：https://leetcode-cn.com/problems/reverse-words-in-a-string-iii*  


# 题解
先将 string 反向遍历，以空格为分界，将每个单词反序地存进 vector, 并且记录空格的个数。  
从 vector 两端依次做交换。  
顺序遍历 vector 中每个反序后的单词，将它们加到保存结果的 string 上，每加一个单词，如果空格计数不为 0，就加一个空格，同时空格计数自减。  
