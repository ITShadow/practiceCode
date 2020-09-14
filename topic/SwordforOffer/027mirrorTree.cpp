/* 请完成一个函数，输入一个二叉树，该函数输出它的镜像。

例如输入：

     4
   /   \
  2     7
 / \   / \
1   3 6   9
镜像输出：

     4
   /   \
  7     2
 / \   / \
9   6 3   1

 

示例 1：

输入：root = [4,2,7,1,3,6,9]
输出：[4,7,2,9,6,3,1]
 

限制：

0 <= 节点个数 <= 1000

注意：本题与主站 226 题相同：https://leetcode-cn.com/problems/invert-binary-tree/

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/er-cha-shu-de-jing-xiang-lcof
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
    TreeNode* mirrorTree(TreeNode* root) {
        if(root==NULL) return root;

        stack<TreeNode*>s;
        s.push(root);
        
        while(!s.empty())
        {
            int size=s.size();
            TreeNode *node=s.top();

            s.pop();
            if(node==NULL) continue;

            swap(node->left,node->right);

            s.push(node->left);
            s.push(node->right);
        }
        return root;
    }
}; */

/* 用栈解决问题 */