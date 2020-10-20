/* 请实现一个函数按照之字形顺序打印二叉树，即第一行按照从左到右的顺序打印，第二层按照从右到左的顺序打印，第三行再按照从左到右的顺序打印，其他行以此类推。

 

例如:
给定二叉树: [3,9,20,null,null,15,7],

    3
   / \
  9  20
    /  \
   15   7
返回其层次遍历结果：

[
  [3],
  [20,9],
  [15,7]
]
 

提示：

节点总数 <= 1000

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/cong-shang-dao-xia-da-yin-er-cha-shu-iii-lcof
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(root==NULL) return res;
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty())
        {
            int size=q.size();
            vector<int>tempVector;

            for(int i=0;i<size;i++)
            {
                TreeNode *tempNode=q.front();
                q.pop();
                tempVector.push_back(tempNode->val);

                if(tempNode->left) q.push(tempNode->left);
                if(tempNode->right) q.push(tempNode->right);
            }
            res.push_back(tempVector);
        }

        for(int i=0;i<res.size();i++)
        {
            if(i%2==1) reverse(res[i].begin(),res[i].end());
        }
        return res;
    }
}; */

/* 二叉树层次遍历后翻转 */