/* 给定一个单链表，其中的元素按升序排序，将其转换为高度平衡的二叉搜索树。

本题中，一个高度平衡二叉树是指一个二叉树每个节点 的左右两个子树的高度差的绝对值不超过 1。

示例:

给定的有序链表： [-10, -3, 0, 5, 9],

一个可能的答案是：[0, -3, 9, -10, null, 5], 它可以表示下面这个高度平衡二叉搜索树：

      0
     / \
   -3   9
   /   /
 -10  5

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/convert-sorted-list-to-binary-search-tree
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
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 
class Solution {
public:

    TreeNode* DFS(vector<int> &res,int l,int r)
    {
        if(l>r) return nullptr;

        int mid=l+(r-l)/2;

        auto root=new TreeNode(res[mid]);
        root->left=DFS(res,l,mid-1);
        root->right=DFS(res,mid+1,r);
        return root;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int>tempVector;
        ListNode *pCurrent=head;
        while(pCurrent)
        {
            tempVector.push_back(pCurrent->val);
            pCurrent=pCurrent->next;
        }
        return DFS(tempVector,0,tempVector.size()-1);
    }
}; */

/* 将链表上的数字转换为数组，二分查找 */