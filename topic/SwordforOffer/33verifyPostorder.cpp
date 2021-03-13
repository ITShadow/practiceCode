/* 输入一个整数数组，判断该数组是不是某二叉搜索树的后序遍历结果。如果是则返回 true，否则返回 false。假设输入的数组的任意两个数字都互不相同。

 

参考以下这颗二叉搜索树：

     5
    / \
   2   6
  / \
 1   3
示例 1：

输入: [1,6,3,2,5]
输出: false
示例 2：

输入: [1,3,2,6,5]
输出: true
 

提示：

数组长度 <= 1000

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/er-cha-sou-suo-shu-de-hou-xu-bian-li-xu-lie-lcof
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

class Solution {
public:
    bool verifyPostorder(vector<int>& postorder) {
        if(postorder.empty()) return true;
        return recursion(postorder,0,postorder.size()-1);
    }

    bool recursion(vector<int>& postorder,int left,int right)
    {
        if(left>=right) return true;
        int root=postorder[right];  
        int pos=left;

        for(;pos<right;pos++)
        {
            if(postorder[pos]>root) break;
        }

        for(int i=pos;i<right;i++)
        {
            if(postorder[i]<root) return false;
        }
        if(!recursion(postorder ,left,pos-1)) return false;
        if(!recursion(postorder,pos,right-1)) return false;
        return true;

    }

}; */