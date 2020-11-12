# 题目描述
给你一个数组 arr ，请你将每个元素用它右边最大的元素替换，如果是最后一个元素，用 -1 替换。  
完成所有替换操作后，请你返回这个数组。  

示例：  
输入：arr = [17,18,5,4,6,1]  
输出：[18,6,6,6,1,-1]  

*来源：力扣（LeetCode）*  
*链接：https://leetcode-cn.com/problems/replace-elements-with-greatest-element-on-right-side*  


# 题解
逆序遍历 arr ，依次保存 arr[i] 之后最大的元素，将其插入结果数组的头部。遍历完成后在结果数组后插入 -1 即可。
