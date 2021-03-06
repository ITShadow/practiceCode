/* 给定一棵二叉树，设计一个算法，创建含有某一深度上所有节点的链表（比如，若一棵树的深度为 D，则会创建出 D 个链表）。返回一个包含所有深度的链表的数组。

 

示例：

输入：[1,2,3,4,5,null,7,8]

        1
       /  \ 
      2    3
     / \    \ 
    4   5    7
   /
  8

输出：[[1],[2,3],[4,5,7],[8]]

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/list-of-depth-lcci
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。 */

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
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
    vector<ListNode*> listOfDepth(TreeNode* tree) {
        vector<ListNode*>res;
        if(tree==NULL) return res;
       
        queue<TreeNode*>q;
        q.push(tree);

        while(!q.empty())
        {
            int size=q.size();
            ListNode *dummy=new ListNode(-1);
            ListNode *pCurrent=dummy;

            for(int i=0;i<size;i++)
            {
                TreeNode *tempNode=q.front();
                q.pop();
                auto currentListNode=new ListNode(tempNode->val);
                pCurrent->next=currentListNode;
                pCurrent=pCurrent->next;

                if(tempNode->left) q.push(tempNode->left);
                if(tempNode->right) q.push(tempNode->right);
                
            }
            res.push_back(dummy->next);
            delete dummy;
        }
        return res;
    }
}; */

/* 层次遍历的变形，没想到在链表这里卡了一下 */