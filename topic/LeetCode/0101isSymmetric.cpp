/* 给定一个二叉树，检查它是否是镜像对称的。

 

例如，二叉树 [1,2,2,3,4,4,3] 是对称的。

    1
   / \
  2   2
 / \ / \
3  4 4  3
 

但是下面这个 [1,2,2,null,3,null,3] 则不是镜像对称的:

    1
   / \
  2   2
   \   \
   3    3
 

进阶：

你可以运用递归和迭代两种方法解决这个问题吗？

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/symmetric-tree
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
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;

        queue<TreeNode*>q;
        q.push(root->left);
        q.push(root->right);

        while(!q.empty())
        {
            TreeNode *A=q.front();
            q.pop();
            TreeNode*B=q.front();
            q.pop();

            if(A==NULL&&B==NULL) continue;
            if(A==NULL||B==NULL) return false;
            if(A->val!=B->val) return false;

            q.push(A->left);
            q.push(B->right);

            q.push(A->right);
            q.push(B->left);
        }
        return true;
        
    }
}; */

/* 迭代法，每层去相应位置数字比较，循环往复 */