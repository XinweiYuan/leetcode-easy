# 题目描述
输入一棵二叉树的根节点，求该树的深度。从根节点到叶节点依次经过的节点（含根、叶节点）形成树的一条路径，最长路径的长度为树的深度。  
例如：  
给定二叉树 [3,9,20,null,null,15,7]，  

&nbsp;&nbsp;&nbsp;&nbsp;3  
&nbsp;&nbsp;&nbsp;/&nbsp;\  
&nbsp;&nbsp;9&nbsp;&nbsp;20  
&nbsp;&nbsp;&nbsp;&nbsp;/&nbsp;&nbsp;\  
&nbsp;&nbsp;&nbsp;15&nbsp;&nbsp;&nbsp;7  
返回它的最大深度 3  

*来源：力扣（LeetCode）*  
*链接：https://leetcode-cn.com/problems/er-cha-shu-de-shen-du-lcof*

# 题解
采用递归求解的方法，如果当前节点不为空，那么就令深度 tmp 等于 1，然后传递当前节点的左右子树分别进行递归，返回左右子树深度的最大值加上tmp
