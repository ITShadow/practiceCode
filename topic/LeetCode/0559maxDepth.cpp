/* 给定一个 N 叉树，找到其最大深度。

最大深度是指从根节点到最远叶子节点的最长路径上的节点总数。

例如，给定一个 3叉树 :

 



 

我们应返回其最大深度，3。

说明:

树的深度不会超过 1000。
树的节点总不会超过 5000。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/maximum-depth-of-n-ary-tree
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。 */

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

/* class Solution {
public:
    int maxDepth(Node* root) {
        if(!root) return 0;

        queue<Node *>q;
        q.push(root);
        int res=0;

        while(!q.empty())
        {
            int size=q.size();

            for(int i=0;i<size;i++)
            {
                Node *tempNode=q.front();
                q.pop();

                for(Node *it:tempNode->children) q.push(it);
            }
            res++;
        }
        return res;
    }
}; */

/* N叉树的层序遍历，重点在于第二个for循环和二叉树不一样，二叉树是判断有就存入 */