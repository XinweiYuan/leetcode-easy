# 题目描述
给你一个字符串 s，它由数字（'0' - '9'）和 '#' 组成。我们希望按下述规则将 s 映射为一些小写英文字符：  
字符（'a' - 'i'）分别用（'1' - '9'）表示。  
字符（'j' - 'z'）分别用（'10#' - '26#'）表示。   
返回映射之后形成的新字符串。  
题目数据保证映射始终唯一。  

示例 1：  
输入：s = "10#11#12"  
输出："jkab"  
解释："j" -> "10#" , "k" -> "11#" , "a" -> "1" , "b" -> "2".  

*来源：力扣（LeetCode）*   
*链接：https://leetcode-cn.com/problems/decrypt-string-from-alphabet-to-integer-mapping*  

# 题解
本题的重点在找到分隔的 #，可以通过判断遍历的当前字符往后两个或一个字符是不是 #，如果不是，那就映射到 'a'~'i'，如果是，就先将当前字符及其后一个储存在单独的一个 string 中，
当遇到了 #，就将这个临时 string 映射到 'j'~'z' 。  
注意： 最后两个字符的处理有所不同，具体可以看代码
