/* 编写代码，移除未排序链表中的重复节点。保留最开始出现的节点。

示例1:

 输入：[1, 2, 3, 3, 2, 1]
 输出：[1, 2, 3]
示例2:

 输入：[1, 1, 1, 1, 2]
 输出：[1, 2]
提示：

链表长度在[0, 20000]范围内。
链表元素在[0, 20000]范围内。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/remove-duplicate-node-lcci
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
    ListNode* removeDuplicateNodes(ListNode* head) {
         ListNode* ob = head;
        while (ob != nullptr)
         {
            ListNode* oc = ob;
            while (oc->next != nullptr)
             {
                if (oc->next->val == ob->val) 
                {
                    oc->next = oc->next->next;
                } 
                else
                 {
                    oc = oc->next;
                }
            }
            ob = ob->next;
        }
        return head;
    }
}; */
/*双指针不断循环指向比较两个数值*/