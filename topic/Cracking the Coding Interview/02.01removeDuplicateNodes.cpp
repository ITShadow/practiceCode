/* ��д���룬�Ƴ�δ���������е��ظ��ڵ㡣�����ʼ���ֵĽڵ㡣

ʾ��1:

 ���룺[1, 2, 3, 3, 2, 1]
 �����[1, 2, 3]
ʾ��2:

 ���룺[1, 1, 1, 1, 2]
 �����[1, 2]
��ʾ��

��������[0, 20000]��Χ�ڡ�
����Ԫ����[0, 20000]��Χ�ڡ�

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/remove-duplicate-node-lcci
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

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
    ListNode* removeDuplicateNodes(ListNode* head) {
         ListNode* ob = head;
        while (ob != nullptr)
         {
            ListNode* oc = ob;
            while (oc->next != nullptr)
             {
                if (oc->next->val == ob->val) 
                {
                    oc->next = oc->next->next;
                } 
                else
                 {
                    oc = oc->next;
                }
            }
            ob = ob->next;
        }
        return head;
    }
}; */
/*˫ָ�벻��ѭ��ָ��Ƚ�������ֵ*/