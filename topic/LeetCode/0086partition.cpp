/* 给定一个链表和一个特定值 x，对链表进行分隔，使得所有小于 x 的节点都在大于或等于 x 的节点之前。

你应当保留两个分区中每个节点的初始相对位置。

 

示例:

输入: head = 1->4->3->2->5->2, x = 3
输出: 1->2->2->4->3->5

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/partition-list
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode *h1=new ListNode(-1);//xiaode
        ListNode *h2=new ListNode(-1);

        ListNode *p1=h1,*p2=h2;

        while(head)
        {
            if(head->val<x) 
            {
                p1->next=head;
                p1=p1->next;
            }
            if(head->val>=x)
            {
                p2->next=head;
                p2=p2->next;
            }
            head=head->next;
        }

        p1->next=h2->next;
        p2->next=NULL;
        return h1->next;
        delete p1,p2;
    }
}; */