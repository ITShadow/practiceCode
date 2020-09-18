/* 从上到下按层打印二叉树，同一层的节点按从左到右的顺序打印，每一层打印到一行。

 

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
  [9,20],
  [15,7]
]
 

提示：

节点总数 <= 1000

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/cong-shang-dao-xia-da-yin-er-cha-shu-ii-lcof
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

        if(root==NULL)  return res;

        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty()){
            vector<int>r;
            int l=q.size();
            for(int i=0;i<l;i++){ //当前层节点都在队列中，依次取出
                TreeNode* t=q.front();
                r.push_back(t->val);
                q.pop();
                if(t->left)q.push(t->left);
                if(t->right)q.push(t->right);
            }
            res.push_back(r);
        }
        return res;
    }
}; */

/* 还是层序遍历的老套路，只不过是每次多一个数组保存 */