# 题目描述
给你一份旅游线路图，该线路图中的旅行线路用数组 paths 表示，其中 paths[i] = [cityAi, cityBi] 表示该线路将会从 cityAi 直接前往 cityBi 。  
请你找出这次旅行的终点站，即没有任何可以通往其他城市的线路的城市。  
题目数据保证线路图会形成一条不存在循环的线路，因此只会有一个旅行终点站。  

示例 1：  
输入：paths = [["London","New York"],["New York","Lima"],["Lima","Sao Paulo"]]  
输出："Sao Paulo"   
解释：从 "London" 出发，最后抵达终点站 "Sao Paulo" 。本次旅行的路线是 "London" -> "New York" -> "Lima" -> "Sao Paulo" 。  

*来源：力扣（LeetCode）*  
*链接：https://leetcode-cn.com/problems/destination-city*  

# 题解
由题意可知，在所有城市中只出现一次的只有起点和终点，而终点只会出现在城市对的第二个元素。由此，可以定义一个 map，key 为城市名，value 为城市出现的次数。
遍历 paths，对其中每个城市对，将地名储存在 map 中并遇见一次就将其对应的 value 加一。*注意：对于每个城市对中的第一个城市加二，防止最后寻找的时候错误地找成起点*
