/* 给你一个链表的头节点 head，请你编写代码，反复删去链表中由 总和 值为 0 的连续节点组成的序列，直到不存在这样的序列为止。

删除完毕后，请你返回最终结果链表的头节点。

 

你可以返回任何满足题目要求的答案。

（注意，下面示例中的所有序列，都是对 ListNode 对象序列化的表示。）

示例 1：

输入：head = [1,2,-3,3,1]
输出：[3,1]
提示：答案 [1,2,1] 也是正确的。
示例 2：

输入：head = [1,2,3,-3,4]
输出：[1,2,4]
示例 3：

输入：head = [1,2,3,-3,-2]
输出：[1]
 

提示：

给你的链表中可能有 1 到 1000 个节点。
对于链表中的每个节点，节点的值：-1000 <= node.val <= 1000.

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/remove-zero-sum-consecutive-nodes-from-linked-list
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
    ListNode* removeZeroSumSublists(ListNode* head) {
        if(!head->next&&head->val==0) return NULL;
        if(!head->next&&head->val!=0) return head;

        vector<int>res;
        ListNode *pCurrent=head;

        while(pCurrent)
        {
            res.push_back(pCurrent->val);
            pCurrent=pCurrent->next;
        }

        for(int i=0;i<res.size();i++)
        {
            int sum=0;

            for(int j=i;j<res.size();j++)
            {
                sum+=res[j];
                if(sum==0)
                {
                    res.erase(res.begin()+i,res.begin()+j+1);
                    i=-1;
                    break;
                }
            }
        }
        if(res.size()==0) return NULL;
        pCurrent=head;

        for(int i=0;i<res.size();i++)
        {
            pCurrent->val=res[i];
            if(i+1==res.size()) break;
            pCurrent=pCurrent->next;
        }
        pCurrent->next=NULL;
        return head;
    }
}; */