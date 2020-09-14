/* 将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。?

?

示例：

输入：1->2->4, 1->3->4
输出：1->1->2->3->4->4

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/merge-two-sorted-lists
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
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

/* 使用一个虚拟头结点。双指针比较，谁小谁往后面连接 */