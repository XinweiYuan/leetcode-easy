# 题目描述
实现一种算法，删除单向链表中间的某个节点（即不是第一个或最后一个节点），假定你只能访问该节点。  
示例：  

输入：单向链表a->b->c->d->e->f中的节点c  
结果：不返回任何数据，但该链表变为a->b->d->e->f  

*来源：力扣（LeetCode）*  
*链接：https://leetcode-cn.com/problems/delete-middle-node-lcci*  

# 题解
由于不能访问前一个节点，故此题可以复制下一个节点的信息到当前节点，然后删去下一个节点。
## 关键代码
node->val = node->next->val;  
auto tmp = node->next;  
node->next = node->next->next;  
delete tmp;  
