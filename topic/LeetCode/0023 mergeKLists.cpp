/* 给你一个链表数组，每个链表都已经按升序排列。

请你将所有链表合并到一个升序链表中，返回合并后的链表。

 

示例 1：

输入：lists = [[1,4,5],[1,3,4],[2,6]]
输出：[1,1,2,3,4,4,5,6]
解释：链表数组如下：
[
  1->4->5,
  1->3->4,
  2->6
]
将它们合并到一个有序链表中得到。
1->1->2->3->4->4->5->6
示例 2：

输入：lists = []
输出：[]
示例 3：

输入：lists = [[]]
输出：[]
 

提示：

k == lists.length
0 <= k <= 10^4
0 <= lists[i].length <= 500
-10^4 <= lists[i][j] <= 10^4
lists[i] 按 升序 排列
lists[i].length 的总和不超过 10^4

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/merge-k-sorted-lists
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

/**
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
    ListNode *merge(ListNode *l1,ListNode *l2)
    {
        if(l1==nullptr) return l2;
        if(l2==nullptr) return l1;

        ListNode *dummy=new ListNode(-1);
        ListNode *pCurrent=dummy;


        while(l1&&l2)
        {
            if(l1->val<l2->val)
            {
                pCurrent->next=l1;
                l1=l1->next;
            }
            else
            {
                pCurrent->next=l2;
                l2=l2->next;
            }
            pCurrent=pCurrent->next;
        }
        pCurrent->next=l1?l1:l2;
        return dummy->next;
        delete dummy;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()) return nullptr;

        int n=lists.size();
        ListNode *res=lists[0];
        for(int i=1;i<n;i++)
        {
            res=merge(res,lists[i]);
        }
        return res;
    }
}; */