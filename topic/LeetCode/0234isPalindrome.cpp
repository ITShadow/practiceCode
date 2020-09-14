/* 请判断一个链表是否为回文链表。

示例 1:

输入: 1->2
输出: false
示例 2:

输入: 1->2->2->1
输出: true
进阶：
你能否用?O(n) 时间复杂度和 O(1) 空间复杂度解决此题？

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/palindrome-linked-list
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

/* 回文联表主要核心点是栈的头部和链表的尾巴是否相同 */