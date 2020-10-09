/* 将一个按照升序排列的有序数组，转换为一棵高度平衡二叉搜索树。

本题中，一个高度平衡二叉树是指一个二叉树每个节点 的左右两个子树的高度差的绝对值不超过 1。

示例:

给定有序数组: [-10,-3,0,5,9],

一个可能的答案是：[0,-3,9,-10,null,5]，它可以表示下面这个高度平衡二叉搜索树：

      0
     / \
   -3   9
   /   /
 -10  5

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/convert-sorted-array-to-binary-search-tree
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
    TreeNode* DFS(vector<int>&nums,int l,int r)
    {
        if(l>r) return NULL;

        int mid=(l+r)/2;

        auto root=new TreeNode(nums[mid]);
        root->left=DFS(nums,l,mid-1);
        root->right=DFS(nums,mid+1,r);
        return root;

    } 
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return DFS(nums,0,nums.size()-1);
    }
}; */

/* 和最小高度树一样的做法，不断找到中点，左边赋予左子树，右边赋予右子树 */