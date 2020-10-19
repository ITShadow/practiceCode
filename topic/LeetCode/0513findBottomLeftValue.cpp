/* 给定一个二叉树，在树的最后一行找到最左边的值。

示例 1:

输入:

    2
   / \
  1   3

输出:
1
 

示例 2:

输入:

        1
       / \
      2   3
     /   / \
    4   5   6
       /
      7

输出:
7
 

注意: 您可以假设树（即给定的根节点）不为 NULL。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/find-bottom-left-tree-value
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
/* class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
       queue<TreeNode*>q;
       q.push(root);
       int res=0;

       while(!q.empty())
       {
           int size=q.size();

           for(int i=0;i<size;i++)
           {
               TreeNode *tempNode=q.front();
               q.pop();

               if(i==0) res=tempNode->val;

               if(tempNode->left) q.push(tempNode->left);
               if(tempNode->right) q.push(tempNode->right);
            }
       } 
        return res;
    }
}; */