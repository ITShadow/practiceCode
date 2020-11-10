/* 给出一棵二叉树，其上每个结点的值都是 0 或 1 。每一条从根到叶的路径都代表一个从最高有效位开始的二进制数。例如，如果路径为 0 -> 1 -> 1 -> 0 -> 1，那么它表示二进制数 01101，也就是 13 。

对树上的每一片叶子，我们都要找出从根到该叶子的路径所表示的数字。

以 10^9 + 7 为模，返回这些数字之和。

 

示例：



输入：[1,0,1,0,1,0,1]
输出：22
解释：(100) + (101) + (110) + (111) = 4 + 5 + 6 + 7 = 22
 

提示：

树中的结点数介于 1 和 1000 之间。
node.val 为 0 或 1 。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/sum-of-root-to-leaf-binary-numbers
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

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
    int sumRootToLeaf(TreeNode* root) {
       if(root==nullptr) return 0;

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
                   tempNode->left->val=tempNode->val*2+tempNode->left->val;
                   q.push(tempNode->left);
               }

               if(tempNode->right) 
               {
                   tempNode->right->val=tempNode->val*2+tempNode->right->val;
                   q.push(tempNode->right);
               }

               if(tempNode->left==nullptr&&tempNode->right==nullptr) sum+=tempNode->val;
           }
       } 
       return sum;
    }
}; */

/* BFS */