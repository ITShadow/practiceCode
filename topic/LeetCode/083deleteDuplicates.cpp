/* 给定一个排序链表，删除所有重复的元素，使得每个元素只出现一次。

示例?1:

输入: 1->1->2
输出: 1->2
示例?2:

输入: 1->1->2->3->3
输出: 1->2->3

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/remove-duplicates-from-sorted-list
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。 */

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
        ListNode* p=head;//慢指针
        ListNode* q=head->next;//快指针
        ListNode *temp=NULL;
        while(p->next!=NULL)
        {
            if(p->val==q->val)//找到重复元素
            {
                if(q->next==NULL)//快指针后面若没有元素直接剔除
                    {

                    p->next=NULL;
                    temp=q;
                    }
                else//快指针后有元素
                {
                    p->next=q->next;
                    temp=q;
                    q=q->next;

                }
            }
            else //元素不相等
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
/* 快慢指针比较删除 */