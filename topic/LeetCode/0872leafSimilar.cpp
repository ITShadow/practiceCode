/* 请考虑一棵二叉树上所有的叶子，这些叶子的值按从左到右的顺序排列形成一个 叶值序列 。



举个例子，如上图所示，给定一棵叶值序列为 (6, 7, 4, 9, 8) 的树。

如果有两棵二叉树的叶值序列是相同，那么我们就认为它们是 叶相似 的。

如果给定的两个头结点分别为 root1 和 root2 的树是叶相似的，则返回 true；否则返回 false 。

 

示例 1：



输入：root1 = [3,5,1,6,2,9,8,null,null,7,4], root2 = [3,5,1,6,7,4,2,null,null,null,null,null,null,9,8]
输出：true
示例 2：

输入：root1 = [1], root2 = [1]
输出：true
示例 3：

输入：root1 = [1], root2 = [2]
输出：false
示例 4：

输入：root1 = [1,2], root2 = [2,2]
输出：true
示例 5：



输入：root1 = [1,2,3], root2 = [1,3,2]
输出：false
 

提示：

给定的两棵树可能会有 1 到 200 个结点。
给定的两棵树上的值介于 0 到 200 之间。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/leaf-similar-trees
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
    vector<int> res;
    void dfs(TreeNode* root) {
        if (root != NULL) {
            if (root->left == NULL && root->right == NULL) {
                res.push_back(root->val);
                return;
            }
            dfs(root->left);
            dfs(root->right);
        }
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> tmp1;
        vector<int> tmp2;
        dfs(root1);
        for (vector<int>::iterator p = res.begin(); p != res.end(); p++)
            tmp1.push_back(*p);
        res.clear();
        dfs(root2);
        for (vector<int>::iterator p = res.begin(); p != res.end(); p++)
            tmp2.push_back(*p);
        return tmp1 == tmp2;
    }
};
 */

/* 这道题不能用BFS */