/* 编写一个函数，检查输入的链表是否是回文的。

?

示例 1：

输入： 1->2
输出： false 
示例 2：

输入： 1->2->2->1
输出： true 
?

进阶：
你能否用 O(n) 时间复杂度和 O(1) 空间复杂度解决此题？

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/palindrome-linked-list-lcci
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
    bool isPalindrome(ListNode* head) {
        ListNode *pCurrent=head;
        stack<int>s;
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
/* 压入栈后尾巴即是头部，可据此进行比较 */