/* 翻转一棵二叉树。

示例：

输入：

     4
   /   \
  2     7
 / \   / \
1   3 6   9
输出：

     4
   /   \
  7     2
 / \   / \
9   6 3   1
备注:

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/invert-binary-tree
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
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL) return root;

        stack<TreeNode*>s;
        s.push(root);

        while(!s.empty())
        {
            TreeNode *node =s.top();
            s.pop();
            
            if(node==NULL) continue;

            swap(node->left,node->right);

            if(node->left) s.push(node->left);
            if(node->right) s.push(node->right);
        }
        return root;
    }
}; */

/* 利用栈或者队列或者递归都可以实现，注意栈弹出根节点指向的依然是左右而不会根据出栈的顺序而有所改变 */