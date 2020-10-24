/* 计算给定二叉树的所有左叶子之和。

示例：

    3
   / \
  9  20
    /  \
   15   7

在这个二叉树中，有两个左叶子，分别是 9 和 15，所以返回 24

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/sum-of-left-leaves
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
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==NULL) return 0;

        queue<TreeNode*>q;
        q.push(root);
        int sum=0;

        while(!q.empty())
        {
            int size=q.size();

            for(int i=0;i<size;i++)
            {
                TreeNode *tempNode=q.front();
                q.pop();

                if(tempNode->left)
                {
                    if(tempNode->left->left==NULL&&tempNode->left->right==NULL) sum+=tempNode->left->val;
                    else q.push(tempNode->left);
                }
                if(tempNode->right) q.push(tempNode->right);
            }
        }
        return sum;
    }
}; */

/* 层次遍历，关键要判断是否为左叶子，不一定是i为0就是左叶子 */