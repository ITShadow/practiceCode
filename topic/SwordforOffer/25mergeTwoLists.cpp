/* ����������������������ϲ�����������ʹ�������еĽڵ���Ȼ�ǵ�������ġ�

ʾ��1��

���룺1->2->4, 1->3->4
�����1->1->2->3->4->4
���ƣ�

0 <= ������ <= 1000

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/he-bing-liang-ge-pai-xu-de-lian-biao-lcof
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *dum=new ListNode(-1);
        ListNode *pre=dum;
        while(l1!=NULL&&l2!=NULL)
        {
            if(l1->val<l2->val)
            {
                pre->next=l1;
                l1=l1->next;
            }
            else
            {
                pre->next=l2;
                l2=l2->next;
            }
            pre=pre->next;
        }
        if(l1==NULL)
        {
            pre->next=l2;
        }
        else{
            pre->next=l1;
        }
        ListNode *ret=dum->next;
        delete dum;
        return ret;

    }
}; */