/* 请实现一个函数，用来判断一棵二叉树是不是对称的。如果一棵二叉树和它的镜像一样，那么它是对称的。

例如，二叉树 [1,2,2,3,4,4,3] 是对称的。

    1
   / \
  2   2
 / \ / \
3  4 4  3
但是下面这个 [1,2,2,null,3,null,3] 则不是镜像对称的:

    1
   / \
  2   2
   \   \
   3    3

 

示例 1：

输入：root = [1,2,2,3,4,4,3]
输出：true
示例 2：

输入：root = [1,2,2,null,3,null,3]
输出：false
 

限制：

0 <= 节点个数 <= 1000

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/dui-cheng-de-er-cha-shu-lcof
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

        queue<TreeNode*> q;
        q.push(root->left);
        q.push(root->right);

        while(!q.empty())
        {
            TreeNode *A=q.front();
            q.pop();
            TreeNode *B=q.front();
            q.pop();

            if(A==NULL&&B==NULL) continue;
            if(A==NULL||B==NULL) return false;
            if(A->val!=B->val)   return false;

            q.push(A->left);
            q.push(B->right);

            q.push(A->right);
            q.push(B->left);
        }
        return true;
    }
}; */

/* 层序遍历，每次比较，循环往复 */