/* ����һ������ͷ���?head?�ķǿյ���������������м��㡣

����������м��㣬�򷵻صڶ����м��㡣

?

ʾ�� 1��

���룺[1,2,3,4,5]
��������б��еĽ�� 3 (���л���ʽ��[3,4,5])
���صĽ��ֵΪ 3 �� (����ϵͳ�Ըý�����л������� [3,4,5])��
ע�⣬���Ƿ�����һ�� ListNode ���͵Ķ��� ans��������
ans.val = 3, ans.next.val = 4, ans.next.next.val = 5, �Լ� ans.next.next.next = NULL.
ʾ��?2��

���룺[1,2,3,4,5,6]
��������б��еĽ�� 4 (���л���ʽ��[4,5,6])
���ڸ��б��������м��㣬ֵ�ֱ�Ϊ 3 �� 4�����Ƿ��صڶ�����㡣
?

��ʾ��

��������Ľ��������?1?��?100?֮�䡣

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/middle-of-the-linked-list
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
    ListNode* middleNode(ListNode* head) {
        ListNode *former=head;
        ListNode *latter=head;
        while(former!=NULL&&former->next!=NULL)
        {
            former=former->next->next;
            latter=latter->next;
        }
        return latter;
    }
}; */
/* �����ҵ��м䣬���ǿ���ָ�룬����һ����β��������һ�����м� */