/* ɾ�������е��ڸ���ֵ val �����нڵ㡣

ʾ��:

����: 1->2->6->3->4->5->6, val = 6
���: 1->2->3->4->5 */

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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* sentinel = new ListNode(0);
    sentinel->next = head;

    ListNode *prev = sentinel, *curr = head, *toDelete = nullptr;
    while (curr != nullptr) 
    {
      if (curr->val == val)
       {
        prev->next = curr->next;
        toDelete = curr;
      } else prev = curr;

      curr = curr->next;

      if (toDelete != nullptr)
      {
        delete toDelete;
        toDelete = nullptr;
      }
    }

    ListNode *ret = sentinel->next;
    delete sentinel;
    return ret;
  }
}; */

/* ˫ָ������������ע��ɾ���ڵ�һ��Ҫ��󣬲�Ȼָ��Ľڵ���Ҳ��� */