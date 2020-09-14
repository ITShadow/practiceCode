/* 实现一种算法，找出单向链表中倒数第 k 个节点。返回该节点的值。

注意：本题相对原题稍作改动

示例：

输入： 1->2->3->4->5 和 k = 2
输出： 4
说明：

给定的 k?保证是有效的。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/kth-node-from-end-of-list-lcci
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/* class Solution {
public:
    int kthToLast(ListNode* head, int k) {
        ListNode *former=head;
        ListNode *latter=head;
        for(int i=0;i<k;i++)
        {
            former=former->next;
        }
        while(former!=NULL)
        {
            former=former->next;
            latter=latter->next;
        }
        return latter->val;
    }
}; */

/* 先让快指针先走k步，慢指针与快指针以相同步速前进，到达尾部是即是倒数k个 */