/* 给定一个非空特殊的二叉树，每个节点都是正数，并且每个节点的子节点数量只能为 2 或 0。如果一个节点有两个子节点的话，那么该节点的值等于两个子节点中较小的一个。

更正式地说，root.val = min(root.left.val, root.right.val) 总成立。

给出这样的一个二叉树，你需要输出所有节点中的第二小的值。如果第二小的值不存在的话，输出 -1 。

 

示例 1：


输入：root = [2,2,5,null,null,5,7]
输出：5
解释：最小的值是 2 ，第二小的值是 5 。
示例 2：


输入：root = [2,2,2]
输出：-1
解释：最小的值是 2, 但是不存在第二小的值。
 

提示：

树中节点数目在范围 [1, 25] 内
1 <= Node.val <= 231 - 1
对于树中每个节点 root.val == min(root.left.val, root.right.val)

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/second-minimum-node-in-a-binary-tree
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 */
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
 */
/* class Solution {
public:
    int findSecondMinimumValue(TreeNode* root) {
        if(root==nullptr) return -1;

        queue<TreeNode*>q;
        q.push(root);
        vector<int>res;

        while(!q.empty())
        {
            int size=q.size();

            for(int i=0;i<size;i++)
            {
                TreeNode *tempNode=q.front();
                q.pop();
                res.push_back(tempNode->val);

                if(tempNode->left) q.push(tempNode->left);
                if(tempNode->right) q.push(tempNode->right);
            }
        }
        sort(res.begin(),res.end());
        for(auto x:res)
        {
            if(x!=root->val) return x;
        } 
            return -1; */
     /*    if(!root) return -1;
        queue<TreeNode*> q;
        q.push(root);
        vector<int> tmp;
        while(!q.empty()){
            int size = q.size();
            for(int i = 0; i < size; i++){
                auto node = q.front(); q.pop();
                tmp.push_back(node->val);
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
        }
        sort(tmp.begin(), tmp.end());
        for(auto x : tmp)
            if(x != root->val)
                return x;
        return -1; */
/*     }
}; */