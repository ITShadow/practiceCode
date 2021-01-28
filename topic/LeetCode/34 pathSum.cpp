/* 输入一棵二叉树和一个整数，打印出二叉树中节点值的和为输入整数的所有路径。从树的根节点开始往下一直到叶节点所经过的节点形成一条路径。

 

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
 

提示：

节点总数 <= 10000
注意：本题与主站 113 题相同：https://leetcode-cn.com/problems/path-sum-ii/

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/er-cha-shu-zhong-he-wei-mou-yi-zhi-de-lu-jing-lcof
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


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