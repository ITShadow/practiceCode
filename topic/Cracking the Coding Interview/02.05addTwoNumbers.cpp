/* 给定两个用链表表示的整数，每个节点包含一个数位。

这些数位是反向存放的，也就是个位排在链表首部。

编写函数对这两个整数求和，并用链表形式返回结果。

 

示例：

输入：(7 -> 1 -> 6) + (5 -> 9 -> 2)，即617 + 295
输出：2 -> 1 -> 9，即912
进阶：思考一下，假设这些数位是正向存放的，又该如何解决呢?

示例：

输入：(6 -> 1 -> 7) + (2 -> 9 -> 5)，即617 + 295
输出：9 -> 1 -> 2，即912

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/sum-lists-lcci
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
        int carry=0;
        int sum=0;
        
        ListNode *dummy=new ListNode(-1);
        ListNode *pCurrent=dummy;
        ListNode *p1=l1,*p2=l2;

        while(p1||p2||carry)
        {
          
            int n1=0,n2=0;
            if(p1==NULL) n1=0;
            else
            {
                n1=p1->val;
                p1=p1->next;

            } 

            if(p2==NULL) n2=0;
            else 
            {
                n2=p2->val;
                p2=p2->next;
            }

            sum=n1+n2+carry;

            ListNode *currentNode=new ListNode(sum%10);
            pCurrent->next=currentNode;
            pCurrent=currentNode;

            carry=sum/10;
        }
        return dummy->next;
        delete dummy;
    }
}; */