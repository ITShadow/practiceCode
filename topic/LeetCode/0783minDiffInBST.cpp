/* 给定一个二叉搜索树的根节点 root，返回树中任意两节点的差的最小值。

 

示例：

输入: root = [4,2,6,1,3,null,null]
输出: 1
解释:
注意，root是树节点对象(TreeNode object)，而不是数组。

给定的树 [4,2,6,1,3,null,null] 可表示为下图:

          4
        /   \
      2      6
     / \    
    1   3  

最小的差值是 1, 它是节点1和节点2的差值, 也是节点3和节点2的差值。
 

注意：

二叉树的大小范围在 2 到 100。
二叉树总是有效的，每个节点的值都是整数，且不重复。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/minimum-distance-between-bst-nodes
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
    void trave(TreeNode *root)
    {
        if(root==NULL) return;

        trave(root->left);
        res.push_back(root->val);
        trave(root->right);
    }

    int minDiffInBST(TreeNode* root) {
        trave(root);
        int minNum=INT_MAX;

        for(int i=0;i<res.size()-1;i++)
        {
            minNum=min(minNum,res[i+1]-res[i]);
        }
        return minNum;
    }
    
}; */

/* 二叉搜索树排序后是升序 */