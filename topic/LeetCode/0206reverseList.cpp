/* ��תһ��������

ʾ��:

����: 1->2->3->4->5->NULL
���: 5->4->3->2->1->NULL
����:
����Ե�����ݹ�ط�ת�������ܷ������ַ����������⣿

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/reverse-linked-list
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
    ListNode* reverseList(ListNode* head) {
        ListNode *latter=NULL;
        ListNode *former=head;
        while(former!=NULL)
        {
            ListNode*temp=former->next;
            former->next=latter;
            latter=former;
            former=temp;
        }
        return latter;
    }
}; */
/* ˫ָ��ָ���򼴿� */