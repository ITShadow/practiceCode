/* ���ж�һ�������Ƿ�Ϊ��������

ʾ�� 1:

����: 1->2
���: false
ʾ�� 2:

����: 1->2->2->1
���: true
���ף�
���ܷ���?O(n) ʱ�临�ӶȺ� O(1) �ռ临�ӶȽ�����⣿

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/palindrome-linked-list
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
    bool isPalindrome(ListNode* head) {
        stack<int>s;
        ListNode *pCurrent=head;
        
        while(pCurrent!=NULL)
        {
            s.push(pCurrent->val);
            pCurrent=pCurrent->next;
        }
        pCurrent=head;
        while(pCurrent!=NULL)
        {
            if(pCurrent->val!=s.top()) 
            {
          
            return false;

            }
              s.pop();
            pCurrent=pCurrent->next;
        }
        return true;
    }
}; */

/* ����������Ҫ���ĵ���ջ��ͷ���������β���Ƿ���ͬ */