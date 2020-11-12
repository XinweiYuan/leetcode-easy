# 题目描述
给定二叉搜索树的根结点 root，返回值位于范围 [low, high] 之间的所有结点的值的和。  

示例 1：  
输入：root = [10,5,15,3,7,null,18], low = 7, high = 15  
输出：32  

*来源：力扣（LeetCode）*  
*链接：https://leetcode-cn.com/problems/range-sum-of-bst*  

# 题解
在遍历二叉平衡树的同时增加一步判断。遍历可以用递归来进行。
