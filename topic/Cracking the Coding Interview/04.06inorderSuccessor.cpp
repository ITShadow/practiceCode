/* 设计一个算法，找出二叉搜索树中指定节点的“下一个”节点（也即中序后继）。

如果指定节点没有对应的“下一个”节点，则返回null。

示例 1:

输入: root = [2,1,3], p = 1

  2
 / \
1   3

输出: 2
示例 2:

输入: root = [5,3,6,2,4,null,null,1], p = 6

      5
     / \
    3   6
   / \
  2   4
 /   
1

输出: null

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/successor-lcci
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
    vector<TreeNode *>res;
    void inorder(TreeNode *root)
    {
        if(root==NULL) return;

        inorder(root->left);
        res.push_back(root);
        inorder(root->right);
    }
    TreeNode* inorderSuccessor(TreeNode* root, TreeNode* p) {
        if(root==NULL) return NULL;

        inorder(root);
        if(p==res[res.size()-1]) return NULL;
        else
        {
            for(int i=0;i<res.size()-1;i++)
            {
                if(p==res[i]) return res[i+1];
            }
        }
        return NULL;
    }
}; */