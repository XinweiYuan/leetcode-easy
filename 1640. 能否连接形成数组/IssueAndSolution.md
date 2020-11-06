# 题目描述
给你一个整数数组 arr ，数组中的每个整数互不相同 。另有一个由整数数组构成的数组 pieces，其中的整数也互不相同。
请你以任意顺序连接 pieces 中的数组以形成 arr。但是，不允许对每个数组 pieces[i] 中的整数重新排序。
如果可以连接 pieces 中的数组形成 arr ，返回 true ；否则，返回 false 。

示例 1：  
输入：arr = [85], pieces = [[85]]  
输出：true  

示例 2：  
输入：arr = [15,88], pieces = [[88],[15]]  
输出：true  
解释：依次连接 [15] 和 [88]  

示例 3：
输入：arr = [49,18,16], pieces = [[16,18,49]]  
输出：false  
解释：即便数字相符，也不能重新排列 pieces[0]  
 
提示：  
1 <= pieces.length <= arr.length <= 100  
sum(pieces[i].length) == arr.length  
1 <= pieces[i].length <= arr.length  
1 <= arr[i], pieces[i][j] <= 100  
arr 中的整数互不相同  
pieces 中的整数互不相同（也就是说，如果将 pieces 扁平化成一维数组，数组中的所有整数互不相同）  

*来源：力扣（LeetCode）*
*链接：https://leetcode-cn.com/problems/check-array-formation-through-concatenation*

# 题解
从遍历 pieces 数组入手，再遍历其中的小数组, 在 arr 中寻找小数组中每个元素的位置， 如果没找到，自然不用再继续，返回 false 即可。
如果找到了就记录此元素出现的位置，再寻找下一个，如果没找到，返回 false，如果找到，检查此元素在 arr 中的位置与上一个元素在 arr 中
的位置是否相差 1，差 1 则继续，否则返回 false。当 pieces 被顺利遍历完， 说明没有失序的数字，最后返回 true 即可。  
## 注意事项
在 cpp 实现中，可以使用 find() 函数来返回位置，但是要注意 find() 利用迭代器来寻找，其返回的是迭代器，找不到会返回 arr.end()。
