# 题目描述
给定二叉搜索树（BST）的根节点和一个值。 你需要在BST中找到节点值等于给定值的节点。 返回以该节点为根的子树。 如果节点不存在，则返回 NULL。  

例如，  
给定二叉搜索树:  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;4  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;/&nbsp;\  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2&nbsp;&nbsp;&nbsp;7  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;/&nbsp;\  
&nbsp;&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;3  

和值: 2  
你应该返回如下子树:  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2     
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;/&nbsp;\     
&nbsp;&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;3  
在上述示例中，如果要找的值是 5，但因为没有节点值为 5，我们应该返回 NULL。  

*来源：力扣（LeetCode）*  
*链接：https://leetcode-cn.com/problems/search-in-a-binary-search-tree*  

# 题解
二叉搜索树的简单查找可以用递归来解决，这道题可以定义一个辅助函数，详情可见代码
