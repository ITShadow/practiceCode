/* 输入两个链表，找出它们的第一个公共节点。 */
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *pA=headA;
        ListNode *pB=headB;
        while(pA!=pB)
        {
            if(pA!=NULL)
            {
                pA=pA->next;
            }
            else
            {
                pA=headB;
            }
            if(pB!=NULL)
            {
                pB=pB->next;
            }
            else
            {
                pB=headA;
            }
        }
        return pA;
    }
}; */

/* 程序员的浪漫，走相同的步数最终会相遇 */