/* ʵ��һ���㷨���ҳ����������е����� k ���ڵ㡣���ظýڵ��ֵ��

ע�⣺�������ԭ�������Ķ�

ʾ����

���룺 1->2->3->4->5 �� k = 2
����� 4
˵����

������ k?��֤����Ч�ġ�

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/kth-node-from-end-of-list-lcci
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
    int kthToLast(ListNode* head, int k) {
        ListNode *former=head;
        ListNode *latter=head;
        for(int i=0;i<k;i++)
        {
            former=former->next;
        }
        while(former!=NULL)
        {
            former=former->next;
            latter=latter->next;
        }
        return latter->val;
    }
}; */

/* ���ÿ�ָ������k������ָ�����ָ������ͬ����ǰ��������β���Ǽ��ǵ���k�� */