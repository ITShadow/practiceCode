/* ����һ�������ж��������Ƿ��л���

Ϊ�˱�ʾ���������еĻ�������ʹ������ pos ����ʾ����β���ӵ������е�λ�ã������� 0 ��ʼ���� ��� pos �� -1�����ڸ�������û�л���

?

ʾ�� 1��

���룺head = [3,2,0,-4], pos = 1
�����true
���ͣ���������һ��������β�����ӵ��ڶ����ڵ㡣


ʾ��?2��

���룺head = [1,2], pos = 0
�����true
���ͣ���������һ��������β�����ӵ���һ���ڵ㡣


ʾ�� 3��

���룺head = [1], pos = -1
�����false
���ͣ�������û�л���


?

���ף�

������ O(1)�������������ڴ�����������

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/linked-list-cycle
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
    bool hasCycle(ListNode *head) {
        ListNode *fast=head;
        ListNode *slow=head;
        if(head==NULL)
        return false;
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
           
            if(fast==slow)
            {
                return true;
            }
             
        }
        return false;
        
    }
}; */

/* ����ָ�룬���û�л��������ܻ����� */