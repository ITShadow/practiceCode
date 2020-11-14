/* 给定一个二叉树和一个目标和，找到所有从根节点到叶子节点路径总和等于给定目标和的路径。

说明: 叶子节点是指没有子节点的节点。

示例:
给定如下二叉树，以及目标和 sum = 22，

              5
             / \
            4   8
           /   / \
          11  13  4
         /  \    / \
        7    2  5   1
返回:

[
   [5,4,11,2],
   [5,8,4,5]
]

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/path-sum-ii
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
    vector<vector<int>> ret;
    unordered_map<TreeNode*, TreeNode*> parent;

    void getPath(TreeNode* node) 
    {
        vector<int> tmp;
        while (node != nullptr)
        {
            tmp.emplace_back(node->val);
            node = parent[node];
        }
        reverse(tmp.begin(), tmp.end());
        ret.emplace_back(tmp);
    }

    vector<vector<int>> pathSum(TreeNode* root, int sum) 
    {
        if (root == nullptr) 
        {
            return ret;
        }

        queue<TreeNode*> que_node;
        queue<int> que_sum;
        que_node.emplace(root);
        que_sum.emplace(0);

        while (!que_node.empty()) 
        {
           
            int size=que_node.size();

            for(int i=0;i<size;i++)
            {
                TreeNode* node = que_node.front();
                que_node.pop();
                int rec = que_sum.front() + node->val;
                que_sum.pop();
                if (node->left == nullptr && node->right == nullptr) 
                {
                    if (rec == sum) 
                    {
                        getPath(node);
                    }
                }
                else
                {
                    if (node->left != nullptr) 
                    {
                        parent[node->left] = node;
                        que_node.emplace(node->left);
                        que_sum.emplace(rec);
                    }
                    if (node->right != nullptr) 
                    {
                        parent[node->right] = node;
                        que_node.emplace(node->right);
                        que_sum.emplace(rec);
                    }
                }
            }
        }
        return ret;
    }
}; */