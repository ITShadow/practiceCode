/* ����һ������������ý��?head��������ÿ������ֵ���� 0 ���� 1����֪��������һ���������ֵĶ����Ʊ�ʾ��ʽ��

���㷵�ظ���������ʾ���ֵ� ʮ����ֵ ��

?

ʾ�� 1��



���룺head = [1,0,1]
�����5
���ͣ��������� (101) ת��Ϊʮ������ (5)
ʾ�� 2��

���룺head = [0]
�����0
ʾ�� 3��

���룺head = [1]
�����1
ʾ�� 4��

���룺head = [1,0,0,1,0,0,1,1,1,0,0,0,0,0,0]
�����18880
ʾ�� 5��

���룺head = [0,0]
�����0
?

��ʾ��

����Ϊ�ա�
����Ľ������������?30��
ÿ������ֵ����?0 ���� 1��

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/convert-binary-number-in-a-linked-list-to-integer
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
    int getDecimalValue(ListNode* head) {
        ListNode *pCurrent=head;
        int sum=0;
        while(pCurrent!=NULL)
        {
            sum=sum*2+pCurrent->val;
            pCurrent=pCurrent->next;
        }
        return sum;
    }
}; */
/* �������㷨���� */