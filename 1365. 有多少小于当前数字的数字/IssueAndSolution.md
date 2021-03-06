# 题目描述
给你一个数组 nums，对于其中每个元素 nums[i]，请你统计数组中比它小的所有数字的数目。  
换而言之，对于每个 nums[i] 你必须计算出有效的 j 的数量，其中 j 满足 j != i 且 nums[j] < nums[i]。    
以数组形式返回答案。  

示例 1：  
输入：nums = [8,1,2,2,3]  
输出：[4,0,1,1,3]  
解释：   
对于 nums[0]=8 存在四个比它小的数字：（1，2，2 和 3）     
对于 nums[1]=1 不存在比它小的数字。  
对于 nums[2]=2 存在一个比它小的数字：（1）  
对于 nums[3]=2 存在一个比它小的数字：（1）     
对于 nums[4]=3 存在三个比它小的数字：（1，2 和 2）    

提示：  
2 <= nums.length <= 500  
0 <= nums[i] <= 100  

*来源：力扣（LeetCode）*
*链接：https://leetcode-cn.com/problems/how-many-numbers-are-smaller-than-the-current-number*  

# 题解
根据提示，nums[i] 在 0 到 100 之间，故本题可以利用一些桶排序的知识，定义一个数组 seq[101] 初始化全为 0, 遍历 nums，对于其中每个数 i，seq[i]++,
然后在遍历一遍 seq，将其中每个不为 0 的数更新为下标小于它的所有 seq[j] 的和，然后根据 nums 中的数字 i，依次将 seq[i] 保存在一个数组中返回即可。
