# 题目描述
翻转一棵二叉树。

示例：  

输入：  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;4  
&nbsp;&nbsp;&nbsp;/&nbsp;&nbsp;&nbsp;\  
&nbsp;&nbsp;2&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;7  
&nbsp;/&nbsp;\\&nbsp;&nbsp;&nbsp;/&nbsp;&nbsp;\  
1&nbsp;&nbsp;&nbsp;3&nbsp;6&nbsp;&nbsp;&nbsp;9  
输出：  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;4  
&nbsp;&nbsp;&nbsp;/&nbsp;&nbsp;&nbsp;\  
&nbsp;&nbsp;7&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2  
&nbsp;/&nbsp;\\&nbsp;&nbsp;&nbsp;/&nbsp;&nbsp;\  
9&nbsp;&nbsp;&nbsp;6&nbsp;3&nbsp;&nbsp;&nbsp;1  

*来源：力扣（LeetCode）*  
*链接：https://leetcode-cn.com/problems/invert-binary-tree*  

# 题解
定义一个新节点，使用递归方法，令新节点的左子树等于 root 右子树，反之亦然。
