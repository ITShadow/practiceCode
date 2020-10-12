/* 给你一棵所有节点为非负值的二叉搜索树，请你计算树中任意两节点的差的绝对值的最小值。

 

示例：

输入：

   1
    \
     3
    /
   2

输出：
1

解释：
最小绝对差为 1，其中 2 和 1 的差的绝对值为 1（或者 2 和 3）。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/minimum-absolute-difference-in-bst
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
    vector<int>res;
    void trave(TreeNode* root)
    {
        if(root==NULL) return;

        trave(root->left);
        res.push_back(root->val);
        trave(root->right);
    }
    int getMinimumDifference(TreeNode* root) {
        trave(root);

        int minAbs=INT_MAX;
        for(int i=0;i<res.size()-1;i++)
        {
            minAbs=min(minAbs,abs(res[i+1]-res[i]));
        }
        return minAbs;
    }
}; */

/* 中序遍历，上升数组，必定是相邻的两两最小 */