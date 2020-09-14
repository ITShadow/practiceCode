/* 给定一个 N 叉树，返回其节点值的前序遍历。

例如，给定一个 3叉树 :

 



 

返回其前序遍历: [1,3,5,6,2,4]。 */

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
        vector<int>res;
    vector<int> preorder(Node* root) {

        if(!root)   return res;
        res.push_back(root -> val);
        for(auto i : root -> children){
            preorder(i);
        }
        return res;
    }
}; */

/* 递归 */

/* class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> res;
        if(!root)   return res;
        stack<Node*> stk;
        stk.push(root);
        while(!stk.empty()){
            Node* tmp = stk.top();
            stk.pop();
            res.push_back(tmp -> val);
            for(int i = tmp -> children.size()-1; i >= 0; --i){
                stk.push(tmp -> children[i]);
            }
        }
        return res;
    }
}; */

/* 迭代法，用栈实现，和层次遍历的队列还是有点不一样，但是总体的架构差不多 */