# 题目描述
给你一个整数数组 nums 。你可以选定任意的 正数 startValue 作为初始值。  
你需要从左到右遍历 nums 数组，并将 startValue 依次累加上 nums 数组中的值。  
请你在确保累加和始终大于等于 1 的前提下，选出一个最小的 正数 作为 startValue 。  

*来源：力扣（LeetCode）  
链接：https://leetcode-cn.com/problems/minimum-value-to-get-positive-step-by-step-sum*


# 题解
遍历 nums，记录每次每次累加后所得值的最小值。如果此值大于等于 0，返回 1，否则返回 1-此值
