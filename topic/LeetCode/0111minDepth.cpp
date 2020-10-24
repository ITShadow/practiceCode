/* 给定一个二叉树，找出其最小深度。

最小深度是从根节点到最近叶子节点的最短路径上的节点数量。

说明：叶子节点是指没有子节点的节点。

 

示例 1：


输入：root = [3,9,20,null,null,15,7]
输出：2
示例 2：

输入：root = [2,null,3,null,4,null,5,null,6]
输出：5
 

提示：

树中节点数的范围在 [0, 105] 内
-1000 <= Node.val <= 1000

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/minimum-depth-of-binary-tree
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };

class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==NULL) return 0;

        queue<TreeNode*>q;
        q.push(root);
        int depth=0;
        int flag=0;

        while(!q.empty())
        {
            int size=q.size();
            depth++;
            for(int i=0;i<size;i++)
            {
                TreeNode *tempNode=q.front();
                q.pop();

                if(tempNode->left) q.push(tempNode->left);
                if(tempNode->right) q.push(tempNode->right);
                if(!tempNode->left&&!tempNode->right) 
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1) break;
        }
        return depth;
    }
}; */

/* 层次遍历，设置一个标志 */