# 题目描述
给你个整数数组 arr，其中每个元素都 不相同。  
请你找到所有具有最小绝对差的元素对，并且按升序的顺序返回。  

示例 1：  
输入：arr = [4,2,1,3]  
输出：[[1,2],[2,3],[3,4]]  

*来源：力扣（LeetCode）  
链接：https://leetcode-cn.com/problems/minimum-absolute-difference*


# 题解
1. 从小到大对 arr 进行排序
2. 计算最小绝对差
3. 遍历排序后的 arr，如果相邻两个数字只差等于最小差，就将这两个数组成数组，插入结果数组。
