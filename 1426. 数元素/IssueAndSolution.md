# 题目描述
给你一个整数数组 arr， 对于元素 x ，只有当 x + 1 也在数组 arr 里时，才能记为 1 个数。  
如果数组 arr 里有重复的数，每个重复的数单独计算。  

示例 1：  
输入：arr = [1,2,3]  
输出：2  
解释：1 和 2 被计算次数因为 2 和 3 在数组 arr 里。  

*来源：力扣（LeetCode）  
链接：https://leetcode-cn.com/problems/counting-elements*


# 题解
遍历 arr 中的元素，如果元素+1可以在arr中找到，就将结果自加一
