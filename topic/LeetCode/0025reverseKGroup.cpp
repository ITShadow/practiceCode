/* 给你一个链表，每 k 个节点一组进行翻转，请你返回翻转后的链表。

k 是一个正整数，它的值小于或等于链表的长度。

如果节点总数不是 k 的整数倍，那么请将最后剩余的节点保持原有顺序。

 

示例：

给你这个链表：1->2->3->4->5

当 k = 2 时，应当返回: 2->1->4->3->5

当 k = 3 时，应当返回: 3->2->1->4->5

 

说明：

你的算法只能使用常数的额外空间。
你不能只是单纯的改变节点内部的值，而是需要实际进行节点交换。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/reverse-nodes-in-k-group
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 *
class Solution {
public:
    pair<ListNode *,ListNode*> myReverse(ListNode *head,ListNode *tail)
    {
        ListNode *tailTemp=tail->next;
        ListNode *pCurrent=head;

        while(tailTemp!=tail)
        {
            ListNode *headTemp=pCurrent->next;
            pCurrent->next=tailTemp;
            tailTemp=pCurrent;
            pCurrent=headTemp;
        }
        return {tail,head};
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *dummy=new ListNode(0);
        dummy->next=head;
        ListNode *pCurrent=dummy;

       while(head)
       {
          ListNode *tail=pCurrent;
          for(int i=0;i<k;i++)
          {
              tail=tail->next;
              if(!tail) return dummy->next;
          }
          ListNode *tailTemp=tail->next;

          pair<ListNode *,ListNode*>result=myReverse(head,tail);
          head=result.first;
          tail=result.second;

          pCurrent->next=head;
          tail->next=tailTemp;

          pCurrent=tail;
          head=tail->next;
       }
       return dummy->next;
       delete dummy;

    }
}; */