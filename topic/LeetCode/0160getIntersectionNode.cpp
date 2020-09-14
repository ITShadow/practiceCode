/* 编写一个程序，找到两个单链表相交的起始节点。 */
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

/* 程序员的烂漫，两条相交的链表走相同多的步数终会相遇 */