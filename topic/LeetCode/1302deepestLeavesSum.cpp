/* 给你一棵二叉树，请你返回层数最深的叶子节点的和。

 

示例：



输入：root = [1,2,3,4,5,null,6,7,null,null,null,null,8]
输出：15
 

提示：

树中节点数目在 1 到 10^4 之间。
每个节点的值在 1 到 100 之间。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/deepest-leaves-sum
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
    int deepestLeavesSum(TreeNode* root) {
        if(root==NULL) return 0;

        queue<TreeNode*>q;
        q.push(root);

        vector<vector<int>>res;

        while(!q.empty())
        {
            int size=q.size();
            vector<int>tempVector;       

            for(int i=0;i<size;i++)
            {
                TreeNode *tempNode=q.front();
                tempVector.push_back(tempNode->val);
                q.pop();

                if(tempNode->left) q.push(tempNode->left);
                if(tempNode->right) q.push(tempNode->right);
            }
            res.push_back(tempVector);
        }

        int m=res.size()-1;
        int sum=0;

        for(auto c:res[m])
        {
            sum+=c;
        }
        return sum;
    }
}; */

/* 层次遍历，用数组记录每一层，数组最后的数组就是最后一层，求和即可 */