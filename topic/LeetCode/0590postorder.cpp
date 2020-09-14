/* 给定一个 N 叉树，返回其节点值的后序遍历。

例如，给定一个 3叉树 :

 



 

返回其后序遍历: [5,6,3,2,4,1].

 

说明: 递归法很简单，你可以使用迭代法完成此题吗?

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/n-ary-tree-postorder-traversal
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 */
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
    vector<int> postorder(Node* root) {
        vector<int>res;
        if(!root) return res;

        stack<Node*>s;
        s.push(root);

        while(!s.empty())
        {
            Node *tempNode=s.top();
            res.push_back(tempNode->val);
            s.pop();

            for(int i=0;i<tempNode->children.size();i++)
            {
                if(tempNode->children.at(i)) //非空结点才入栈
                s.push(tempNode->children.at(i));
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }
}; */

/* 迭代法，有点舒服。注意和前序遍历的迭代法区分 */