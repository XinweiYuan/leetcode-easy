# 题目描述
给你一个字符串 s 和一个 长度相同 的整数数组 indices  
请你重新排列字符串 s ，其中第 i 个字符需要移动到 indices[i] 指示的位置。  
返回重新排列后的字符串。  

示例 1：  
输入：s = "codeleet", indices = [4,5,6,7,0,2,1,3]  
输出："leetcode"  
解释：如图所示，"codeleet" 重新排列后变为 "leetcode" 。  

*来源：力扣（LeetCode）*  
*链接：https://leetcode-cn.com/problems/shuffle-string*  

# 题解
本题其实是将 s 按照 indices 中的顺序排序
1. 构建一个 struct，元素的属性包括 s 中字符以及此字符在 indices 中的下标
2. 将 s 和 indices 中的下标依次按照 struct 构建的元素保存在一个 vector 中
3. 将 vector 从小到大排序，改写 sort 的默认 compare 方法，按照 struct 元素中的下标从小到大排序
4. 将排序后的 vector 中的每个元素的字符拼接成一个 string
5. 返回此 string
