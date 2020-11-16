/* 编写程序以 x 为基准分割链表，使得所有小于 x 的节点排在大于或等于 x 的节点之前。如果链表中包含 x，x 只需出现在小于 x 的元素之后(如下所示)。分割元素 x 只需处于“右半部分”即可，其不需要被置于左右两部分之间。

示例:

输入: head = 3->5->8->5->10->2->1, x = 5
输出: 3->1->2->10->5->5->8

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/partition-list-lcci
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
    ListNode* partition(ListNode* head, int x) {
        ListNode *h1 = new ListNode(-1); // 记录比x小的节点组成的链表
        ListNode *h2 = new ListNode(-1); // 记录比x大的节点组成的链表
        ListNode *p1 = h1, *p2 = h2;
        while (head) {
            if (head -> val < x) {
                p1 -> next = head;
                p1 = p1 -> next;
            } else {
                p2 -> next = head;
                p2 = p2 -> next;
            }
            head = head -> next;
        }
        // 将两个链表拼接起来
        p2 -> next = nullptr;
        p1 -> next = h2 -> next;
        return h1 -> next;
    }
}; */