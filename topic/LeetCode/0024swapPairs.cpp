/* 给定一个链表，两两交换其中相邻的节点，并返回交换后的链表。

你不能只是单纯的改变节点内部的值，而是需要实际的进行节点交换。

 

示例 1：


输入：head = [1,2,3,4]
输出：[2,1,4,3]
示例 2：

输入：head = []
输出：[]
示例 3：

输入：head = [1]
输出：[1]

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/swap-nodes-in-pairs
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr) return nullptr;

        ListNode * dummy=new ListNode(0);
        dummy->next=head;

        ListNode *p1=dummy;

        while(p1->next&&p1->next->next)
        {
            ListNode *node1=p1->next;
            ListNode *node2=p1->next->next;//保存两个点

            p1->next=node2;
            node1->next=node2->next;
            node2->next=node1;//交换，注意交换的顺序

            p1=p1->next->next;//指针右移，移动到下一轮准备交换的位置
        }
        return dummy->next;
        delete dummy;//注意删除虚拟节点，防止内存泄漏
    }
}; */

/* 两两交换节点，可以搞个虚拟节点，尽量不要让虚拟节点亲自下场，来个指针指向他 */