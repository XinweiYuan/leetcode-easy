# 题目描述
给你一个数组 nums，请你从中抽取一个子序列，满足该子序列的元素之和 严格 大于未包含在该子序列中的各元素之和。  
如果存在多个解决方案，只需返回 长度最小 的子序列。如果仍然有多个解决方案，则返回 元素之和最大 的子序列。  
与子数组不同的地方在于，「数组的子序列」不强调元素在原数组中的连续性，也就是说，它可以通过从数组中分离一些（也可能不分离）元素得到。  
注意，题目数据保证满足所有约束条件的解决方案是 唯一 的。同时，返回的答案应当按 非递增顺序 排列。  

示例 1：  
输入：nums = [4,3,10,9,8]  
输出：[10,9]   
解释：子序列 [10,9] 和 [10,8] 是最小的、满足元素之和大于其他各元素之和的子序列。但是 [10,9] 的元素之和最大。  

*来源：力扣（LeetCode）  
链接：https://leetcode-cn.com/problems/minimum-subsequence-in-non-increasing-order*  

# 题解
1. 将 nums 从大到小排序
2. 定义 sum1 = 0， sum2 = (nums各个元素之和), 结果数组 rlt
3. 遍历 nums，将遍历到的数字放进 rlt，sum1 自加此数，sum2 自减此数，判断 sum1 是否严格大于 sum2，如果是，则 break
4. 返回 rlt
