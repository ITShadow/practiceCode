/* 给你两个 非空 链表来代表两个非负整数。数字最高位位于链表开始位置。它们的每个节点只存储一位数字。将这两数相加会返回一个新的链表。

你可以假设除了数字 0 之外，这两个数字都不会以零开头。

 

进阶：

如果输入链表不能修改该如何处理？换句话说，你不能对列表中的节点进行翻转。

 

示例：

输入：(7 -> 2 -> 4 -> 3) + (5 -> 6 -> 4)
输出：7 -> 8 -> 0 -> 7

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/add-two-numbers-ii
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int>s1,s2;

        while(l1!=NULL)
        {
            s1.push(l1->val);
            l1=l1->next;
        }

        while(l2!=NULL)
        {
            s2.push(l2->val);
            l2=l2->next;
        }

        int n1=0,n2=0,carry=0,sum=0;
        ListNode *dummy=new ListNode(-1);
        ListNode* pCurrent=dummy;

        while(!s1.empty() || !s2.empty() ||carry)
        {
            if(s1.empty()) n1=0;
            else 
            {
                n1=s1.top();
                s1.pop();
            }

            if(s2.empty()) n2=0;
            else
            {
                n2=s2.top();
                s2.pop();
            }

            sum=n1+n2+carry;

            ListNode* currentNode=new ListNode(sum%10);
            currentNode->next=pCurrent->next;
            pCurrent->next=currentNode;

            carry=sum/10;
        }

        return dummy->next;
        delete dummy;
    }
}; */

/* 倒序首先要想到栈的操作，空余的不一定要在入栈的时候补零，可以出栈时判断，然后就是相加的核心了 */