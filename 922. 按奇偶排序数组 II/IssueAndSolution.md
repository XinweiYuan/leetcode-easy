# 题目描述
给定一个非负整数数组 A， A 中一半整数是奇数，一半整数是偶数。  
对数组进行排序，以便当 A[i] 为奇数时，i 也是奇数；当 A[i] 为偶数时， i 也是偶数。  
你可以返回任何满足上述条件的数组作为答案。  

示例：  
输入：[4,2,5,7]  
输出：[4,5,2,7]  
解释：[4,7,2,5]，[2,5,4,7]，[2,7,4,5] 也会被接受。  

*来源：力扣（LeetCode）*  
*链接：https://leetcode-cn.com/problems/sort-array-by-parity-ii*

# 题解
定义保存奇数的数组 odd 和保存偶数的数组 even，遍历 A 分别将奇数偶数放进各自的数组。以 odd even 任意一个的长度遍历它们，按照一偶一奇的次序将数字放进结果数组。
