# 题目描述
给你一个整数数组 nums ，请你将数组按照每个值的频率 升序 排序。如果有多个值的频率相同，请你按照数值本身将它们降序排序。   
请你返回排序后的数组。  

示例 1：  
输入：nums = [1,1,2,2,2,3]  
输出：[3,1,1,2,2,2]  
解释：'3' 频率为 1，'1' 频率为 2，'2' 频率为 3 。  

*来源：力扣（LeetCode）*  
*链接：https://leetcode-cn.com/problems/sort-array-by-increasing-frequency*  


# 题解
用 map 来保存 nums 中元素的出现频率。  
使用 sort 来对 nums 进行排序，第三个参数用 lambda 表达式实现题设中所需的排序条件。
