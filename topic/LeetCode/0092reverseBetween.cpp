/* 反转从位置 m 到 n 的链表。请使用一趟扫描完成反转。

说明:
1 ≤ m ≤ n ≤ 链表长度。

示例:

输入: 1->2->3->4->5->NULL, m = 2, n = 4
输出: 1->4->3->2->5->NULL

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/reverse-linked-list-ii
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode *dummy=new ListNode(-1);
        dummy->next=head;

        ListNode *pre=dummy;

        for(int i=0;i<m-1;i++)
        {
            pre=pre->next;
        }

        ListNode *cur=pre->next;
        for(int i=m;i<n;i++)
        {
            auto temp=cur->next;

            cur->next=temp->next;
            temp->next=pre->next;
            pre->next=temp;
        }
        return dummy->next;
        delete dummy;
    }
}; */