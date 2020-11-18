# 题目描述
给定一棵二叉搜索树，请找出其中第k大的节点。  

示例 1:  
输入: root = [3,1,4,null,2], k = 1  
输出: 4  

*来源：力扣（LeetCode）*   
*链接：https://leetcode-cn.com/problems/er-cha-sou-suo-shu-de-di-kda-jie-dian-lcof*  

# 题解
定义一个辅助函数，用以递归访问二叉树所有节点，将每个不为空的节点值放进一个 vector 中。  
将 vector 排序，找到第 k 大的数即可。
