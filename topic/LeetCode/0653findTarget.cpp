/* 给定一个二叉搜索树和一个目标结果，如果 BST 中存在两个元素且它们的和等于给定的目标结果，则返回 true。

案例 1:

输入: 
    5
   / \
  3   6
 / \   \
2   4   7

Target = 9

输出: True
 

案例 2:

输入: 
    5
   / \
  3   6
 / \   \
2   4   7

Target = 28

输出: False

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/two-sum-iv-input-is-a-bst
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
    vector<int>res;

    void inorder(TreeNode *root)
    {
        if(root==nullptr) return;

        inorder(root->left);
        res.push_back(root->val);
        inorder(root->right);
    }
    bool findTarget(TreeNode* root, int k) {
        inorder(root);
        int left=0,right=res.size()-1;   //双指针，分别从头和尾相向移动。
        while(left<right)
         {
            if(res[left]+res[right]==k)
                return true;
            else if(res[left]+res[right]<k)
                left++;
            else
                right--;
        }
        return false;
    }
}; */