/* ����һ����������ɾ�������ظ���Ԫ�أ�ʹ��ÿ��Ԫ��ֻ����һ�Ρ�

ʾ��?1:

����: 1->1->2
���: 1->2
ʾ��?2:

����: 1->1->2->3->3
���: 1->2->3

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/remove-duplicates-from-sorted-list
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
    ListNode* deleteDuplicates(ListNode* head) {
    if(head==NULL||head->next==NULL)
            return head;
        ListNode* p=head;//��ָ��
        ListNode* q=head->next;//��ָ��
        ListNode *temp=NULL;
        while(p->next!=NULL)
        {
            if(p->val==q->val)//�ҵ��ظ�Ԫ��
            {
                if(q->next==NULL)//��ָ�������û��Ԫ��ֱ���޳�
                    {

                    p->next=NULL;
                    temp=q;
                    }
                else//��ָ�����Ԫ��
                {
                    p->next=q->next;
                    temp=q;
                    q=q->next;

                }
            }
            else //Ԫ�ز����
            {
                p=q;
                q=q->next;
            }
            if(temp!=NULL)
            {
                delete temp;
                temp=NULL;
            }
        }
        return head;
    }
}; */
/* ����ָ��Ƚ�ɾ�� */